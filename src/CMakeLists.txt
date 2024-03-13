file(GLOB INTEDEX_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_executable(${INTEDEX_PROJECT_NAME} ${INTEDEX_SRC_FILES})

find_package(wxWidgets 3.3.0 COMPONENTS core base)

if (wxWidgets_FOUND)
  include(${wxWidgets_USE_FILE})
else()
  include(FetchContent)
  FetchContent_Declare(
    wxWidgets
    GIT_REPOSITORY "https://github.com/wxWidgets/wxWidgets.git"
    GIT_TAG        "v3.2.4"
  )
endif()

target_link_libraries(${INTEDEX_PROJECT_NAME} PRIVATE ${wxWidgets_LIBRARIES})

target_include_directories(${INTEDEX_PROJECT_NAME} PRIVATE ${INTEDEX_INCLUDE_DIR})

set_target_properties(${INTEDEX_PROJECT_NAME}
                      PROPERTIES 
                      RUNTIME_OUTPUT_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
)
