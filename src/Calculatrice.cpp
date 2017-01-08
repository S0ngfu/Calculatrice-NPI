#include "Calculatrice.h"
#include "OperatorBinaryAdd.h"
#include "OperatorUnarySquare.h"
#include "OperatorBinarySubtract.h"
#include "OperatorBinaryDivide.h"
#include "OperatorBinaryMultiply.h"
#include "OperatorUnarySquareRoot.h"
#include "OperatorUnaryChangeSign.h"

#include <iostream>

bool Calculatrice::isOnlyDouble(const char* str)
{
    char* endptr = 0;
    strtod(str, &endptr);

    return !(*endptr != '\0' || endptr == str);
}

std::string Calculatrice::operateChoice(const std::string &operateur)
{
    OperatorBinary* operationBin;
    OperatorUnary* operationUn;
    switch (operateur[0])
    {
        case '+':
            operationBin = new OperatorBinaryAdd();
            addOperate(operationBin);
            break;
        case '-':
            operationBin = new OperatorBinarySubtract();
            addOperate(operationBin);
            break;
        case '*':
            operationBin = new OperatorBinaryMultiply();
            addOperate(operationBin);
            break;
        case '/':
            if(d_pile.peekLast() != 0) {
                operationBin = new OperatorBinaryDivide();
                addOperate(operationBin);
            } else
                return "Division par 0";
            break;
        case 's':
            operationUn = new OperatorUnarySquare();
            addOperate(operationUn);
            break;
        case 'r':
            if(d_pile.peekLast() >= 0) {
                operationUn = new OperatorUnarySquareRoot();
                addOperate(operationUn);
            } else
                return "Racine carré d'un nombre négatif";
            break;
        case 'w':
            d_pile.swap();
            break;
        case 'd':
            d_pile.pop_back();
            break;
        case 'i':
            operationUn = new OperatorUnaryChangeSign();
            addOperate(operationUn);
            break;
        case 'h':
            return "+ : Addition\n- : Soustraction\n* : Multiplication\n/ : Division\ns : Carré";
        case 'q':
            return "quit";
        default:
            break;
    }
    return "";
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

std::string Calculatrice::input(std::string& inputs)
{
    std::string exceptions;
    const char *c = inputs.c_str();
    if (isOnlyDouble(c))
    {
        double temp = stod(inputs, 0);
        d_pile.push(temp);
    }
    else
    {
        exceptions = operateChoice(c);
    }
    return exceptions;
}

Pile Calculatrice::getPile()
{
    return d_pile;
}
