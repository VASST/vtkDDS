# Copyright 2020 Adam Rankin
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

#-----------------------------------------------------------------------
#
# Inputs:
#
# - NDDSHOME: root directory for Connext installation
# - NDDSSTATIC: Whether to link against static libs
#
# Outputs:
#
# - Connext_FOUND: flag indicating if the package was found.
# - Connext_HOME: Root directory for the NDDS install.
# - Connext_TARGETS: List of available targets found by this module.
# - Connext_DDSGEN: Location of the DDSGEN script.
#
# Usage:
#
#   find_package(Connext MODULE)
#   target_link_libraries(<target> rti::<lib>)
#
#-----------------------------------------------------------------------

set(_connext_hints
  "C:/Program Files/rti_connext_dds-6.0.1"
  )

if(UNIX)
  list(APPEND _connext_hints
    "/home/$ENV{USER}/rti_connext_dds-6.0.1"
  )
endif()

if(NDDSHOME)
  list(APPEND _connext_hints
    ${NDDSHOME}
    )
endif()

if($ENV{NDDSHOME})
  list(APPEND _connext_hints
    $ENV{NDDSHOME}
    )
endif()

if(MSVC)
  if(${CMAKE_GENERATOR} MATCHES "2019")
    set(_lib_compiler "VS2017")
  elseif(${CMAKE_GENERATOR} MATCHES "2017")
    set(_lib_compiler "VS2017")
  elseif(${CMAKE_GENERATOR} MATCHES "2015")
    set(_lib_compiler "VS2015")
  else()
    message(FATAL_ERROR "Visual Studio version not supported.")
  endif()

  if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(_lib_prefix "x64Win64")
  else()
    set(_lib_prefix "i86Win32")
  endif()
elseif(UNIX AND NOT APPLE)
  set(_lib_compiler "gcc5.4.0")
  if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(_lib_prefix "x64Linux3")
  else()
    set(_lib_prefix "i86Linux3")
  endif()
elseif(APPLE)
  set(_lib_prefix "x64Darwin17")
  set(_lib_compiler "clang9.0")
endif()

set(_lib_folder ${_lib_prefix}${_lib_compiler})

set(_expected_libs
  nddsc
  nddscore
  nddscpp
  nddscpp2
  nddsdotnet461
  nddsjava
  nddsmetp
  nddssecurity
  nddstransporttcp
  rticonnextmsgc
  rticonnextmsgcpp
  rticonnextmsgcpp2
  rticonnextmsgdotnet461
  rtiddsconnectorlua
  rtidlc
  rtidlcpp
  rtijniroutingservice
  rtimonitoring
  rtirecordingservice
  rtiroutingservice
  rtirsassigntransf
  rtirsinfrastructure
  rtirsjniadapter
  rtixml2
)

foreach(_lib ${_expected_libs})
  set(_lib_type SHARED)
  if(NDDSSTATIC)
    set(_lib ${_lib}z)
    set(_lib_type STATIC)
  endif()

  find_library(_lib_file_release
    ${_lib}${CMAKE_STATIC_LIBRARY_SUFFIX}
    PATHS
      ${_connext_hints}
    PATH_SUFFIXES
      lib/${_lib_folder}
    )

  # Look for debug version
  find_library(_lib_file_debug
    ${_lib}d${CMAKE_STATIC_LIBRARY_SUFFIX}
    PATHS
      ${_connext_hints}
    PATH_SUFFIXES
      lib/${_lib_folder}
    )

  if(_lib_file_release)
    # Confirm the DLL is there
    if(WIN32 AND NOT NDDSSTATIC)
      string(REPLACE ".lib" ".dll" _dll_file_release ${_lib_file_release})
      if(NOT EXISTS ${_dll_file_release})
        message(FATAL_ERROR "Release shared library requested but dll cannot be found for library ${_lib}.")
      endif()
    endif()

    # Retrieve base path
    get_filename_component(_ver_dir ${_lib_file_release} DIRECTORY)
    get_filename_component(_lib_dir ${_ver_dir} DIRECTORY)
    get_filename_component(Connext_HOME ${_lib_dir} DIRECTORY)

    # Create target
    add_library(rti::${_lib} ${_lib_type} IMPORTED)
    if(WIN32)
      if(NOT NDDSSTATIC)
        set_target_properties(rti::${_lib} PROPERTIES
          IMPORTED_IMPLIB_RELEASE ${_lib_file_release}
          )
        set_target_properties(rti::${_lib} PROPERTIES
          IMPORTED_LOCATION_RELEASE ${_dll_file_release}
          )
      else()
        set_target_properties(rti::${_lib} PROPERTIES
          IMPORTED_LOCATION_RELEASE ${_lib_file_release}
          )
      endif()
      set(_defs RTI_WIN32)
      if(NOT NDDSSTATIC)
        list(APPEND _defs NDDS_DLL_VARIABLE)
      endif()
      set_property(TARGET rti::${_lib} PROPERTY
        INTERFACE_COMPILE_DEFINITIONS
          ${_defs}
          )
    else()
      set_target_properties(rti::${_lib} PROPERTIES
        IMPORTED_LOCATION_RELEASE ${_lib_file_release}
        )
      set_property(TARGET rti::${_lib} PROPERTY
        INTERFACE_COMPILE_DEFINITIONS
          RTI_UNIX
          )
      set(_dep_libs dl)
      if(NOT ANDROID)
        list(APPEND _dep_libs pthread)
      endif()
      set_property(TARGET rti::${_lib} PROPERTY
        INTERFACE_LINK_LIBRARIES
          ${_dep_libs}
        )
    endif()
    set_property(TARGET rti::${_lib} PROPERTY
      INTERFACE_INCLUDE_DIRECTORIES 
        ${Connext_HOME}/include
        ${Connext_HOME}/include/ndds
        ${Connext_HOME}/include/ndds/hpp
      )

    # Add debug details if present
    if(_lib_file_debug)
      if(WIN32)
        if(NOT NDDSSTATIC)
          string(REPLACE ".lib" ".dll" _dll_file_debug ${_lib_file_debug})
          if(NOT EXISTS ${_dll_file_debug})
            message(FATAL_ERROR "Debug shared library requested but dll cannot be found for library ${_lib}.")
          endif()
          set_target_properties(rti::${_lib} PROPERTIES
            IMPORTED_IMPLIB_DEBUG ${_lib_file_debug}
            )
          set_target_properties(rti::${_lib} PROPERTIES
            IMPORTED_LOCATION_DEBUG ${_dll_file_debug}
            )
        else()
          set_target_properties(rti::${_lib} PROPERTIES
            IMPORTED_LOCATION_DEBUG ${_lib_file_debug}
            )
        endif()
      else()
        set_target_properties(rti::${_lib} PROPERTIES
          IMPORTED_LOCATION_DEBUG ${_lib_file_debug}
          )
      endif()
    endif()

    list(APPEND Connext_TARGETS rti::${_lib})
  endif()

  unset(_lib_file_debug CACHE)
  unset(_lib_file_release CACHE)
endforeach()

if(Connext_HOME)
  set(Connext_HOME ${Connext_HOME} CACHE FILEPATH "The root location found for RTI Connext SDK")
  mark_as_advanced(Connext_HOME)
  
  # Attempt to find ddsgen (ability to convert IDL files to XML)
  set(_suffix "")
  if(WIN32)
    set(_suffix ".bat")
  endif()

  if(EXISTS ${Connext_HOME}/bin/rtiddsgen${_suffix})
    # confirm that the script is runnable
    execute_process(COMMAND "${Connext_HOME}/bin/rtiddsgen${_suffix}" "-n_version"
      RESULT_VARIABLE 
        _results
      OUTPUT_QUIET 
      ERROR_QUIET
      )
    if(NOT _results EQUAL 0)
      message("FindConnext: Unable to run ddsgen script. IDL processing may not be possible.")
    endif()

    set(Connext_DDSGEN ${Connext_HOME}/bin/rtiddsgen${_suffix} CACHE FILEPATH "Path to the DDSGEN script")
    mark_as_advanced(Connext_DDSGEN)
  endif()
endif()

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Connext
  FOUND_VAR Connext_FOUND
  REQUIRED_VARS
    Connext_HOME
    Connext_DDSGEN
    Connext_TARGETS
)
