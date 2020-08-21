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
  "C:/Program Files (x86)/rti_connext_dds-6.0.1"
  )

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