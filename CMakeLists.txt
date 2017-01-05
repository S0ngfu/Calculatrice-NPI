cmake_minimum_required(VERSION 3.6)
project(Calculatrice-NPI)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SDL2_PATH "F:\\LibrairieGraphique\\SDL2-2.0.5\\i686-w64-mingw32")

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${Calculatrice-NPI_SOURCE_DIR}/cmake")

set(SDL2_LIBRARY F:/LibrairieGraphique/SDL/lib/win32/SDL2.lib)

find_package(SDL2 REQUIRED)


set(SOURCE_FILES
        src/main.cpp
        src/Calculatrice.h
        src/Calculatrice.cpp
        src/Pile.h
        src/Pile.cpp
        src/Operator.h
        src/OperatorBinary.h
        src/OperatorBinary.cpp
        src/OperatorBinaryAdd.h
        src/OperatorBinaryAdd.cpp
        src/OperatorUnary.h
        src/OperatorUnary.cpp
        src/OperatorUnarySquare.h
        src/OperatorUnarySquare.cpp
        src/OperatorBinarySubtract.cpp
        src/OperatorBinarySubtract.h
        src/OperatorBinaryDivide.cpp
        src/OperatorBinaryDivide.h
        src/OperatorBinaryMultiply.cpp
        src/OperatorBinaryMultiply.h
        src/OperatorUnarySquareRoot.cpp
        src/OperatorUnarySquareRoot.h
        src/Interface.cpp
        src/Interface.h
        src/InterfaceConsole.cpp
        src/InterfaceConsole.h
        src/InterfaceGraphique.cpp
        src/InterfaceGraphique.h
        )

add_executable(Calculatrice-NPI ${SOURCE_FILES})

include_directories(${SDL2_INCLUDE_DIR})

target_link_libraries(Calculatrice-NPI ${SDL2_LIBRARY})



set(TEST_FILES test/catch.hpp
        test/TestPile.cpp)
add_executable(TestCalc ${TEST_FILES})