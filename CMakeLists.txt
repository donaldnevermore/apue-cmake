cmake_minimum_required(VERSION 3.25)
project(apue VERSION 0.1.0)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(apue ch01/offset.c)

target_include_directories(apue PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(apue PRIVATE ${CMAKE_SOURCE_DIR}/lib/libapue.a)
# or you can do this instead.
# target_include_directories(apue PRIVATE ${CMAKE_SOURCE_DIR}/include)
# find_library(XYZ apue ${CMAKE_SOURCE_DIR}/lib)
# target_link_libraries(apue PRIVATE ${XYZ})

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
