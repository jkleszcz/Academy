cmake_minimum_required(VERSION 2.8)
project(gtest_example)


add_library(libstuff
    src/example.cpp
    src/list.cpp
    src/roots.cpp
    src/wymierne.cpp
    src/expression.cpp)

target_include_directories(libstuff PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)


add_executable(main src/main.cpp)
target_link_libraries(main libstuff)


add_subdirectory(lib/gtest)
add_subdirectory(test)

