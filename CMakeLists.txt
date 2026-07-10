cmake_minimum_required(VERSION 3.20)

project(lingmo-display VERSION 1.0.0 DESCRIPTION "Lingmo Display" LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Quick)

add_library(lingmo-display SHARED
    src/main.cpp
)
target_compile_definitions(lingmo-display PRIVATE LINGMO_DISPLAY_LIBRARY)

target_link_libraries(lingmo-display PUBLIC
    Qt6::Core
    Qt6::Quick
)

install(TARGETS lingmo-display
    EXPORT lingmo-displayTargets
    LIBRARY DESTINATION 
    ARCHIVE DESTINATION 
)

install(DIRECTORY include/lingmo-display
    DESTINATION 
)
