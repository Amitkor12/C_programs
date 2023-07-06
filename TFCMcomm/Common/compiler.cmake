# the name of the target operating system
set(CMAKE_SYSTEM_NAME Windows)

set(MINGW_COMPILER_PATH "C:/Users/incads1918/Downloads/MinGW/bin/")

# which compilers to use for C and C++
set(CMAKE_C_COMPILER   "C:/Users/incads1918/Downloads/MinGW/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/Users/incads1918/Downloads/MinGW/bin/g++.exe")

# where is the target environment located
set(CMAKE_FIND_ROOT_PATH  "C:/Users/incads1918/Downloads/MinGW")

set(CMAKE_OBJCOPY ${MINGW_COMPILER_PATH}objcopy CACHE INTERNAL "objcopy tool")
set(CMAKE_SIZE_UTIL ${MINGW_COMPILER_PATH}size CACHE INTERNAL "size tool")

# adjust the default behavior of the FIND_XXX() commands:
# search programs in the host environment
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)

# search headers and libraries in the target environment
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)