cmake_minimum_required(VERSION 3.14)

project(birthday_desktop VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

set(FLTK_DIR /usr/local/fltk-1.4.x/build)
find_package(FLTK REQUIRED NO_MODULE)

if(APPLE)
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -framework Cocoa")
endif()

if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include_directories(birthday-data/include)
add_subdirectory(birthday-data)

include_directories(include)
add_subdirectory(src)
