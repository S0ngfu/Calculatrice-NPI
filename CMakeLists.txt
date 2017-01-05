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
        src/InterfaceGraphique.h)

add_executable(Calc ${SOURCE_FILES})

set(Qt5Core_DIR "F:/Qt/5.8/msvc2015_64/lib/cmake/Qt5Core")
set(Qt5Widgets_DIR "F:/Qt/5.8/msvc2015_64/lib/cmake/Qt5Widgets")
set(Qt5Quick_DIR "F:/Qt/5.8/msvc2015_64/lib/cmake/Qt5Quick")

#découverte de Qt, on ne sait pas encore précisement ce que l'on va utiliser
find_package( Qt5Core REQUIRED )
find_package( Qt5Widgets REQUIRED )
find_package( Qt5Gui REQUIRED )
find_package( Qt5Quick REQUIRED )
qt5_use_modules( Calc Core Widgets Gui Quick)

set(TEST_FILES test/catch.hpp
        test/TestPile.cpp)
add_executable(TestCalc ${TEST_FILES})