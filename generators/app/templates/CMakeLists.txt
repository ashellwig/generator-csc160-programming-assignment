cmake_minimum_required(VERSION 3.10)
project(ChapterTODO:CHAPNUMProgram VERSION 0.1.0)

# Sources
add_executable(
    ChapterTODO:CHAPNUMProgram
    src/general_functions.cc
    src/main.cc
)

# CXXFlags
set(CXXFLAGS -Wall -std=c++2a -g -glldb)

# C++ Standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CSS_STANDARD_REQUIRED True)

# Includes
target_include_directories(ChapterTODO:CHAPNUMProgram PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_BINARY_DIR}/include"
                           "include"
                           )
