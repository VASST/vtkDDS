cmake_minimum_required(VERSION 3.16.0)

project(vtkDDS)

set(CMAKE_CXX_STANDARD 11 CACHE INTERNAL "Use C++11 standard")
mark_as_advanced(CMAKE_CXX_STANDARD)

set(CMAKE_MODULE_PATH
  ${CMAKE_CURRENT_SOURCE_DIR}/CMake/Modules
  ${CMAKE_MODULE_PATH}
  )

SET(vtkDDS_VERSION_MAJOR "0")
SET(vtkDDS_VERSION_MINOR "1")
SET(vtkDDS_VERSION_PATCH "0")

find_package(VTK REQUIRED)

if(COMMAND cmake_policy)
  #cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

option(VTKDDS_BUILD_SHARED "Build a shared library or static library." ON)
if(VTKDDS_BUILD_SHARED)
  set(VTKDDS_LIB_TYPE SHARED)
else()
  set(VTKDDS_LIB_TYPE STATIC)
endif()

option(VTKDDS_USE_RTI "Use the RTI implementation of DDS." ON)
option(VTKDDS_USE_OPENDDS "Use the OpenDDS implementation of DDS." OFF)

if(VTKDDS_USE_RTI)
  OPTION(VTKDDS_RTI_STATIC "Use static linked libraries for RTI implementation." OFF)
  if(VTKDDS_RTI_STATIC)
    set(NDDSSTATIC ON)
  endif()
  find_package(Connext REQUIRED)
elseif(VTKDDS_USE_OPENDDS)
  find_package(OpenDDS REQUIRED)
else()
  message(FATAL_ERROR "You must choose one of the two DDS implementations. Please enable VTKDDS_USE_OPENDDS or VTKDDS_USE_RTI.")
endif()

if(NOT vtkDDS_INSTALL_BIN_DIR)
  SET(vtkDDS_INSTALL_BIN_DIR "bin")
endif()

if(NOT vtkDDS_INSTALL_LIB_DIR)
  SET(vtkDDS_INSTALL_LIB_DIR "lib")
endif()

if(NOT vtkDDS_INSTALL_DATA_DIR)
  SET(vtkDDS_INSTALL_DATA_DIR "share")
endif()

if(NOT vtkDDS_INSTALL_INCLUDE_DIR)
  SET(vtkDDS_INSTALL_INCLUDE_DIR "include")
endif()

if(NOT vtkDDS_INSTALL_PACKAGE_DIR)
  SET(vtkDDS_INSTALL_PACKAGE_DIR "${vtkDDS_INSTALL_LIB_DIR}/cmake/vtkDDS-${vtkDDS_VERSION_MAJOR}.${vtkDDS_VERSION_MINOR}" CACHE INTERNAL "")
endif()

add_subdirectory(Source)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/config.cmake.in
  ${CMAKE_CURRENT_BINARY_DIR}/vtkDDSConfig.cmake 
  IMMEDIATE
  )

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
  ${CMAKE_CURRENT_BINARY_DIR}/vtkDDSConfigVersion.cmake
  VERSION "${vtkDDS_VERSION_MAJOR}.${vtkDDS_VERSION_MINOR}.${vtkDDS_VERSION_PATCH}"
  COMPATIBILITY SameMajorVersion)

export(TARGETS vtkDDS
  FILE ${CMAKE_CURRENT_BINARY_DIR}/vtkDDSTargets.cmake
  )

# Export targets for install
install(EXPORT vtkDDS
  DESTINATION ${vtkDDS_INSTALL_PACKAGE_DIR}
  FILE vtkDDSTargets.cmake
  )

install(FILES
  ${CMAKE_CURRENT_BINARY_DIR}/vtkDDSConfig.cmake
  ${CMAKE_CURRENT_BINARY_DIR}/vtkDDSConfigVersion.cmake
  DESTINATION ${vtkDDS_INSTALL_PACKAGE_DIR}
  COMPONENT Development
  )

install(FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/CMake/Modules/FindConnext.cmake
  DESTINATION ${vtkDDS_INSTALL_PACKAGE_DIR}/Modules
  COMPONENT Development
  )
