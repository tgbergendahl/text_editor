cmake_minimum_required(VERSION 3.10)

project(TextEditor VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)

# Configure files from templates
configure_file(README.md.in README.md @ONLY)
configure_file(src/config.h.in src/config.h @ONLY)

add_executable(text_editor 
    src/main.cpp)

# Include the build directory for generated headers
target_include_directories(text_editor PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/src)