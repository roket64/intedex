cmake_minimum_required(VERSION 3.22.0)

set(INTEDEX_PROJECT_NAME intedex)
set(INTEDEX_PROJECT_VERSION 0.1.0)

set(INTEDEX_SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set(INTEDEX_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the output directory for excutables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

project(${INTEDEX_PROJECT_NAME} 
        VERSION ${INTEDEX_PROJECT_VERSION}
        LANGUAGES CXX
)

add_subdirectory(src)