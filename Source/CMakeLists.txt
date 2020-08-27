project(vtkDDS)

# gather source files
set(vtkDDS_HEADERS
  hello_world.hpp
  hello_worldPlugin.hpp
  )

set(vtkDDS_SOURCES
  hello_world_publisher.cxx
  hello_world.cxx
  hello_worldPlugin.cxx
  hello_world_subscriber.cxx
  )

# add_library
add_library(vtkDDS ${vtkDDS_HEADERS} ${vtkDDS_SOURCES})
target_link_libraries(vtkDDS 
  rti::nddscore
  )