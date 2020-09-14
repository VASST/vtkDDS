project(vtkDDS)

# gather source files
set(vtkDDS_HEADERS
  vtkImageSubscriber.h
  )

set(vtkDDS_PREGENERATED
  pregenerated/image_8bps.hpp
  pregenerated/image_8bps.cxx
  pregenerated/image_16bps.hpp
  pregenerated/image_16bps.cxx
  pregenerated/image_32bps.hpp
  pregenerated/image_32bps.cxx
  )

set(vtkDDS_SOURCES
  vtkImageSubscriber.cxx
  )

# add_library
add_library(vtkDDS ${vtkDDS_HEADERS} ${vtkDDS_SOURCES} ${vtkDDS_PREGENERATED})
target_link_libraries(vtkDDS PUBLIC
  rti::nddscore
  vtkCommonCore
  )
target_include_directories(vtkDDS PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/pregenerated
  ${vtkCommonCore_INCLUDE_DIRS}
  ${vtkkwiml_INCLUDE_DIRS}
  )