cmake_minimum_required(VERSION 3.14)
project(PR3_6)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(../PR3_6/lib/googletest)

include_directories(/opt/homebrew/opt/ncurses/include)
link_directories(/opt/homebrew/opt/ncurses/lib)

add_executable(PR3_6
        classes/B1.h
        classes/B1.cpp
        classes/B2.h
        classes/B2.cpp
        classes/D1.h
        classes/D1.cpp
        classes/D2.h
        classes/D2.cpp
        classes/D3.h
        classes/D3.cpp
        main.cpp
)

target_link_libraries(PR3_6)

add_executable(PR3_6_tests
        classes/B1.h
        classes/B1.cpp
        classes/B2.h
        classes/B2.cpp
        classes/D1.h
        classes/D1.cpp
        classes/D2.h
        classes/D2.cpp
        classes/D3.h
        classes/D3.cpp
        tests/tests.cpp
)

target_link_libraries(PR3_6_tests gtest gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PR3_6_tests)
