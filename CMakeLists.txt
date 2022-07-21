cmake_minimum_required(VERSION 3.13)
project(neural_net C)


add_library(matrix src/matrix.c include/matrix.h)

target_include_directories(matrix PUBLIC include)

# Add main.cpp file of project root directory as source file

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(matrix_test src/main.c)
target_link_libraries(matrix_test PRIVATE matrix)