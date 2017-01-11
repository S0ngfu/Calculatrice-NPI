#include "Calculatrice.h"
#include "OperatorBinaryAdd.h"
#include "OperatorUnarySquare.h"
#include "OperatorBinarySubtract.h"
#include "OperatorBinaryDivide.h"
#include "OperatorBinaryMultiply.h"
#include "OperatorUnarySquareRoot.h"
#include "OperatorUnaryChangeSign.h"
#include "OperatorUnaryCosinus.h"
#include "OperatorUnarySinus.h"
#include "OperatorUnaryTangente.h"
#include "OperatorUnaryExponential.h"
#include "OperatorUnaryNaturalLogarithm.h"
#include "OperatorUnaryDecimalLogarithm.h"
#include "OperatorBinaryPow.h"

#include <iostream>
#include <cstring>

bool Calculatrice::isOnlyDouble(const char* str)
{
    char* endptr = 0;
    strtod(str, &endptr);

    return !(*endptr != '\0' || endptr == str);
}

void Calculatrice::addOperate(OperatorBinary* operation)
{
    if(d_pile.size() >= 2)
        d_pile.push(operation->operate(d_pile.return_pop_back(), d_pile.return_pop_back()));
}

void Calculatrice::addOperate(OperatorUnary* operation)
{
    if(d_pile.size() >= 1)
        d_pile.push(operation->operate(d_pile.return_pop_back()));
}

Pile Calculatrice::getPile()
{
    return d_pile;
}

void Calculatrice::pushInPile(double val)
{
    d_pile.push(val);
}

void Calculatrice::add()
{
    operationBin = new OperatorBinaryAdd();
    addOperate(operationBin);
}

void Calculatrice::substract()
{
    operationBin = new OperatorBinarySubtract();
    addOperate(operationBin);
}

void Calculatrice::multiply()
{
    operationBin = new OperatorBinaryMultiply();
    addOperate(operationBin);
}

void Calculatrice::divide()
{
    operationBin = new OperatorBinaryDivide();
    addOperate(operationBin);
}

void Calculatrice::square()
{
    operationUn = new OperatorUnarySquare();
    addOperate(operationUn);
}

void Calculatrice::squareRoot()
{
    operationUn = new OperatorUnarySquareRoot();
    addOperate(operationUn);
}

void Calculatrice::swap()
{
    d_pile.swap();
}

void Calculatrice::pop_back()
{
    d_pile.pop_back();
}

void Calculatrice::changeSign()
{
    operationUn = new OperatorUnaryChangeSign();
    addOperate(operationUn);
}

void Calculatrice::cosinus()
{
    operationUn = new OperatorUnaryCosinus();
    addOperate(operationUn);
}

void Calculatrice::sinus()
{
    operationUn = new OperatorUnarySinus();
    addOperate(operationUn);
}

void Calculatrice::tangente()
{
    operationUn = new OperatorUnaryTangente();
    addOperate(operationUn);
}

void Calculatrice::exponential()
{
    operationUn = new OperatorUnaryExponential();
    addOperate(operationUn);
}

void Calculatrice::naturalLogarithm()
{
    operationUn = new OperatorUnaryNaturalLogarithm();
    addOperate(operationUn);
}

void Calculatrice::decimalLogarithm()
{
    operationUn = new OperatorUnaryDecimalLogarithm();
    addOperate(operationUn);
}

void Calculatrice::pow()
{
    operationBin = new OperatorBinaryPow();
    addOperate(operationBin);
}

void Calculatrice::saveValue()
{
    d_saveValue.push_back(d_pile.peekLast());
}

void Calculatrice::putSavedValueInPile(int index)
{
    //Car index est entre 1 compris et d_saveValue.size() compris
    d_pile.push(d_saveValue[index-1]);
    d_saveValue[index-1] = d_saveValue[d_saveValue.size()-1];
    d_saveValue.pop_back();
}

std::vector<double> Calculatrice::getSavedValue()
{
    return d_saveValue;
}

std::vector<std::string> Calculatrice::getSavedCommand()
{
    return d_saveCommand;
}

void Calculatrice::saveCommand(std::string commands)
{
    d_saveCommand.push_back(commands);
}

std::string Calculatrice::getSavedCommand(int index)
{
    //Car index est entre 1 compris et d_saveValue.size() compris
    return d_saveCommand[index - 1];
}

void Calculatrice::deleteSavedCommand(int index)
{
    //Car index est entre 1 compris et d_saveValue.size() compris
    d_saveCommand[index-1] = d_saveCommand[d_saveCommand.size()-1];
    d_saveCommand.pop_back();
}

int Calculatrice::getNumberSavedValue()
{
    return d_saveValue.size();
}

int Calculatrice::getNumberSavedCommand()
{
    return d_saveCommand.size();
}

