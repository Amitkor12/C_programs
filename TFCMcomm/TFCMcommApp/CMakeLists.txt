# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.23.0)

# Optional: print out extra messages to see what is going on. Comment it to have less verbose messages
set(CMAKE_VERBOSE_MAKEFILE ON)

# Path to toolchain file. This one has to be before 'project()' below
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/../common/compiler.cmake")

# Set the path to the output directory
set(OUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../Out)

#Save the generated executable in common Out folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  ${OUT_PATH}/$<$<CONFIG:DEBUG>:DEBUG>)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY  ${OUT_PATH}/$<$<CONFIG:DEBUG>:DEBUG>)

# Set the project name
project(TFCMcommApp)
set(EXECUTABLE ${PROJECT_NAME})

enable_language(C ASM)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# List of source files
set(SRC_FILES
        main.cpp
        TFCMcommApp.cbp
        )

add_executable(${EXECUTABLE} ${SRC_FILES})

# Add the include directories for the Comm project
target_include_directories(${EXECUTABLE} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../TFCMComm")

# Link the Comm library
target_link_libraries(${EXECUTABLE} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../Out/libTFCMcomm.dll")