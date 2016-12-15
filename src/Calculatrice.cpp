//
// Created by Simon on 06/12/2016.
//

#include "Calculatrice.h"
#include "OperatorBinaryAdd.h"

#include <string>

bool Calculatrice::isOnlyDouble(const char* str)
{
    char* endptr = 0;
    strtod(str, &endptr);

    return !(*endptr != '\0' || endptr == str);
}

void Calculatrice::operateChoice(const std::string &operateur)
{
    switch (operateur[0])
    {
        case '+':
            addOperate(new OperatorBinaryAdd());
            break;
        case 'q':
            //quit = true;
            break;
        default:
            break;
    }

}

void Calculatrice::addOperate(OperatorBinary* operation)
{
    operation.operate(d_pile.return_pop_back(),
                      d_pile.return_pop_back());
}

void Calculatrice::addOperate(OperatorUnary* operation)
{
    operation.operate(d_pile.return_pop_back());
}