//
// Created by Simon on 06/12/2016.
//

#include "Calculatrice.h"

#include <string>

bool Calculatrice::isOnlyDouble(const char* str)
{
    char* endptr = 0;
    strtod(str, &endptr);

    return !(*endptr != '\0' || endptr == str);
}

void Calculatrice::operate(const string &operateur)
{
    switch (operateur[0])
    {
        case '+':
            OperatorBinaryAdd addition;
            d_pile.operate(addition);
            break;
        case 'q':
            quit = true;
            break;
        default:
            break;
    }
}

void Calculatrice::operateAdd()
{
    OperatorBinaryAdd op;
    d_pile.push(op.operate(
            d_pile.return_pop_back(),
            d_pile.return_pop_back()));
}