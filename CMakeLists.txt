cmake_minimum_required(VERSION 3.0.0)
project(Galloc VERSION 0.1.0 LANGUAGES C)

set(SOURCE_FILES src/main.c src/hash_table.c src/array_list.c)
include_directories(include/)

# Specific platform only includes

#if(WIN32)
#elseif(APPLE)
#elseif(UNIX AND NOT APPLE)
#endif()

add_executable(Galloc ${SOURCE_FILES})
target_include_directories(Galloc PRIVATE ${CMAKE_SOURCE_DIR}/include/galloc)

