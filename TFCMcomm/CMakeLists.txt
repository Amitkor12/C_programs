# Script to build CM7 and CM4 core together
cmake_minimum_required(VERSION 3.23.0)

# Optional: print out extra messages to see what is going on. Comment it to have less verbose messages
set(CMAKE_VERBOSE_MAKEFILE ON)

# Path to toolchain file. This one has to be before 'project()' below
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/Common/compiler.cmake")

#Project info
project(CCP)

# Compile code only if It is not for GitCommitID generation
add_subdirectory(TFCMcomm)
add_subdirectory(TFCMcommApp)