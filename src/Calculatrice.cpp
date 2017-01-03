#include "Calculatrice.h"
#include "OperatorBinaryAdd.h"
#include "OperatorUnarySquare.h"
#include "OperatorBinarySubtract.h"
#include "OperatorBinaryDivide.h"
#include "OperatorBonaryMultiply.h"
#include "OperatorUnarySquareRoot.h"

#include <iostream>

bool Calculatrice::isOnlyDouble(const char* str)
{
    char* endptr = 0;
    strtod(str, &endptr);

    return !(*endptr != '\0' || endptr == str);
}

void Calculatrice::operateChoice(const std::string &operateur, bool& quit)
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
            operationBin = new OperatorBinaryDivide();
            addOperate(operationBin);
            break;
        case 's':
            operationUn = new OperatorUnarySquare();
            addOperate(operationUn);
            break;
        case 'r':
            operationUn = new OperatorUnarySquareRoot();
            addOperate(operationUn);
            break;
        case 'w':
            d_pile.swap();
            break;
        case 'q':
            quit=true;
            break;
        default:
            break;
    }

}

void Calculatrice::addOperate(OperatorBinary* operation)
{
    d_pile.push(operation->operate(d_pile.return_pop_back(),
                      d_pile.return_pop_back()));
}

void Calculatrice::addOperate(OperatorUnary* operation)
{
    d_pile.push(operation->operate(d_pile.return_pop_back()));
}

void Calculatrice::run() {
    bool quit = false;
    while(!quit)
    {
        std::string inputs;
        std::cin >> inputs;
        const char *c = inputs.c_str();
        if (isOnlyDouble(c))
        {
            double temp = stod(inputs, 0);
            d_pile.push(temp);
        }
        else
        {
            operateChoice(c,quit);
        }
        std::cout<<d_pile.peek()<<std::endl;
    }
}
