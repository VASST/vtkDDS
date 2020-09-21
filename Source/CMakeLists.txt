project(vtkDDS)

# gather source files
set(vtkDDS_HEADERS
  vtkImageSubscriber.h
  )

set(vtkDDS_PREGENERATED
  pregenerated/image.hpp
  pregenerated/image.cxx
  pregenerated/imagePlugin.hpp
  pregenerated/imagePlugin.cxx
  )

set(vtkDDS_SOURCES
  vtkImageSubscriber.cxx
  )

set(vtkDDS_INCLUDE_DIRS
  ${CMAKE_CURRENT_SOURCE_DIR}/pregenerated
  ${CMAKE_CURRENT_BINARY_DIR}
  ${vtkCommonCore_INCLUDE_DIRS}
  ${vtkCommonDataModel_INCLUDE_DIRS}
  ${vtkkwiml_INCLUDE_DIRS}
  )

# add_library
configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/Export.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Export.h
    )

add_library(vtkDDS ${VTKDDS_LIB_TYPE} ${vtkDDS_HEADERS} ${vtkDDS_SOURCES} ${vtkDDS_PREGENERATED})
target_link_libraries(vtkDDS PUBLIC
  rti::nddscore
  rti::nddsc
  rti::nddscpp2
  vtkCommonCore
  vtkCommonDataModel
  )
foreach(p IN LISTS vtkDDS_INCLUDE_DIRS)
  target_include_directories(vtkDDS PUBLIC $<BUILD_INTERFACE:${p}>)
endforeach()
target_include_directories(vtkDDS PUBLIC $<INSTALL_INTERFACE:${vtkDDS_INSTALL_INCLUDE_DIR}>)
target_compile_definitions(vtkDDS PRIVATE ${PROJECT_NAME}_EXPORTS)

install(FILES ${vtkDDS_HEADERS}
  DESTINATION ${vtkDDS_INSTALL_INCLUDE_DIR}
  COMPONENT Development)

install(TARGETS vtkDDS EXPORT vtkDDS
  RUNTIME DESTINATION ${vtkDDS_INSTALL_BIN_DIR} COMPONENT RuntimeLibraries
  LIBRARY DESTINATION ${vtkDDS_INSTALL_LIB_DIR} COMPONENT RuntimeLibraries
  ARCHIVE DESTINATION ${vtkDDS_INSTALL_LIB_DIR} COMPONENT Development)
