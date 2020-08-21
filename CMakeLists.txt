cmake_minimum_required(VERSION 3.16.0)

project(vtkDDS)

set(CMAKE_CXX_STANDARD 11 CACHE INTERNAL "Use C++11 standard")
mark_as_advanced(CMAKE_CXX_STANDARD)

set(CMAKE_MODULE_PATH
  ${CMAKE_CURRENT_SOURCE_DIR}/CMake/Modules
  ${CMAKE_MODULE_PATH}
  )

if(COMMAND cmake_policy)
  #cmake_policy(SET CMP0003 NEW)
endif(COMMAND cmake_policy)

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

add_subdirectory(Source)