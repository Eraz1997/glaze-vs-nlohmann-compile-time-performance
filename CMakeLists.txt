cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 23)

project(
    GlazeVsNlohmannCompileTimePerformance
    VERSION 0.1.0
    LANGUAGES CXX
)

add_executable(GlazeExecutable src/glazeMain.cpp)
add_executable(NlohmannExecutable src/nlohmannMain.cpp)

target_include_directories(GlazeExecutable SYSTEM PRIVATE glaze/include)
target_include_directories(NlohmannExecutable SYSTEM PRIVATE json/include)

install(TARGETS GlazeExecutable NlohmannExecutable OPTIONAL DESTINATION .)
