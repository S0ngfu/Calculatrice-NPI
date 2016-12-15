//
// Created by Simon on 15/12/2016.
//

#ifndef CALCULATRICE_NPI_CALCULATRICE_H
#define CALCULATRICE_NPI_CALCULATRICE_H

#include "Pile.h"
#include "OperatorBinary.h"
#include "OperatorUnary.h"

class Calculatrice
{
public:
    bool isOnlyDouble(const char* str);
    void operateChoice(const std::string &operateur);
    void addOperate(OperatorBinary* operation);
    void addOperate(OperatorUnary* operation);
private:
    Pile d_pile;
};

#endif //CALCULATRICE_NPI_CALCULATRICE_H
