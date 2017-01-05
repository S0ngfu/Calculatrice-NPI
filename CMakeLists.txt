cmake_minimum_required(VERSION 3.6)
project(Calculatrice-NPI)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

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
        src/OperatorUnarySquare.cpp src/OperatorBinarySubtract.cpp src/OperatorBinarySubtract.h src/OperatorBinaryDivide.cpp src/OperatorBinaryDivide.h src/OperatorBinaryMultiply.cpp src/OperatorBinaryMultiply.h src/OperatorUnarySquareRoot.cpp src/OperatorUnarySquareRoot.h src/Interface.cpp src/Interface.h)
add_executable(Calc ${SOURCE_FILES})

set(TEST_FILES test/catch.hpp
        test/TestPile.cpp)
add_executable(TestCalc ${TEST_FILES})