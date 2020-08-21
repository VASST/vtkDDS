# Copyright 2014-2015 Open Source Robotics Foundation, Inc.
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

###############################################################################
#
# CMake module for finding RTI Connext.
#
# Input variables:
#
# - NDDSHOME (optional): When specified, header files and libraries
#   will be searched for in `${NDDSHOME}/include`, `${NDDSHOME}/include/ndds`
#   and `${NDDSHOME}/lib` respectively.
# - NDDSSTATIC (optional): Whether to link against static libs
#
# Output variables:
#
# - Connext_FOUND: flag indicating if the package was found
# - Connext_HOME: Root directory for the NDDS install.
# - Connext_LIBRARIES: List of targets produced by this Find module
# - Connext_DDSGEN: Path to the idl2code generator
# - Connext_DDSGEN_SERVER: Path to the idl2code generator in server mode
#
# Example usage:
#
#   find_package(Connext MODULE)
#   target_link_libraries(<target> RTI::
#
###############################################################################

set(_Connext_hints
  "C:/Program Files/rti_connext_dds-6.0.1"
  )

if(UNIX)
  list(APPEND _Connext_hints
    /home/$ENV{USER}/rti_connext_dds-6.0.1
  )
endif()

if(NDDSHOME)
  list(APPEND _Connext_hints
    ${NDDSHOME}
    )
endif()

if($ENV{NDDSHOME})
  list(APPEND _Connext_hints
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
  if(NDDSSTATIC)
    set(_lib ${_lib}z)
  endif()
message(${_lib})
unset(_lib_file_release CACHE)

  find_library(_lib_file_release
    ${_lib}${CMAKE_STATIC_LIBRARY_SUFFIX}
    PATHS
      ${_Connext_hints}
    PATH_SUFFIXES
      lib/${_lib_folder}
    )
    message(${_lib_file_release})
endforeach()

include(FindPackageHandleStandardArgs)
# Connext_HOME, Connext_ARCHITECTURE_NAME, Connext_LIBRARY_DIRS, and
# Connext_LIBRARY_DIR are not always set, depending on the source of Connext.
find_package_handle_standard_args(Connext
  FOUND_VAR Connext_FOUND
  REQUIRED_VARS
    Connext_INCLUDE_DIRS
    Connext_LIBRARIES
    Connext_DEFINITIONS
    Connext_DDSGEN
)
