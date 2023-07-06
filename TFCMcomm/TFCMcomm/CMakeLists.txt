# Set the minimum version of CMake required
cmake_minimum_required(VERSION 3.23.0)

# set(CMAKE_C_COMPILER   "C:/Users/incads1918/Downloads/MinGW/bin/gcc.exe")
# set(CMAKE_CXX_COMPILER "C:/Users/incads1918/Downloads/MinGW/bin/g++.exe")

# Optional: print out extra messages to see what is going on. Comment it to have less verbose messages
set(CMAKE_VERBOSE_MAKEFILE ON)

# Path to toolchain file. This one has to be before 'project()' below
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/../common/compiler.cmake")

set(OUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../Out)

#Save the generated executable in common Out folder
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  ${OUT_PATH}/$<$<CONFIG:DEBUG>:DEBUG>)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY  ${OUT_PATH}/$<$<CONFIG:DEBUG>:DEBUG>)

# Set the project name
project(tfcmcomm)
set(EXECUTABLE ${PROJECT_NAME})

enable_language(C ASM)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)


# Add the library target
add_library(TFCMcomm SHARED
    main.cpp
    main.h
    TFCMcomm.cbp
)