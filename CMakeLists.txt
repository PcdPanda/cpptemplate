cmake_minimum_required(VERSION 3.14)
project(MyProject LANGUAGES CXX)

# Specify C++ standard (C++20 in this case) and disable extensions
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(TARGET_NAME main) # Add the executable target


# Include directory (target to be used in both build and install)
include_directories(${CMAKE_SOURCE_DIR}/include)

# Specify the source files (recursively find all .cpp files in src)
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cpp)

add_executable(${TARGET_NAME} ${SOURCES})

# Specify include directories for the target (to be installed)
target_include_directories(${TARGET_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Enable compiler warnings
target_compile_options(${TARGET_NAME} PRIVATE -Wall -Wextra -Wpedantic)

# Installation rules (optional, to support 'make install')
install(TARGETS ${TARGET_NAME} DESTINATION bin)
install(DIRECTORY include/mylib DESTINATION include)
