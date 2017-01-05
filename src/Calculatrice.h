#ifndef CALCULATRICE_NPI_CALCULATRICE_H
#define CALCULATRICE_NPI_CALCULATRICE_H

#include "Pile.h"
#include "OperatorBinary.h"
#include "OperatorUnary.h"

class Calculatrice
{
public:
    bool input(std::string& inputs);
    bool isOnlyDouble(const char* str);
    void operateChoice(const std::string &operateur, bool& quit);
    void addOperate(OperatorBinary* operation);
    void addOperate(OperatorUnary* operation);
    Pile getPile();

private:
    Pile d_pile;
};

#endif //CALCULATRICE_NPI_CALCULATRICE_H
