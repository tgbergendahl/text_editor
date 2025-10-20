cmake_minimum_required(VERSION 3.10)

project(TextEditor VERSION 0.0.2)

set(CMAKE_CXX_STANDARD 20)

# Configure files from templates
# Configure README if template exists
if(EXISTS "${CMAKE_SOURCE_DIR}/README.md.in")
    configure_file(README.md.in README.md @ONLY)
endif()

# Always configure config.h as it's required by the application
configure_file(src/config.h.in src/config.h @ONLY)

add_executable(text_editor 
    src/main.cpp
    src/text_editor.cpp)

# Include the build directory for generated headers
target_include_directories(text_editor PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/src)