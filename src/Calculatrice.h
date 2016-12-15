//
// Created by Simon on 15/12/2016.
//

#ifndef CALCULATRICE_NPI_CALCULATRICE_H
#define CALCULATRICE_NPI_CALCULATRICE_H

#include "Pile.h"

class Calculatrice
{
public:
    bool isOnlyDouble(const char* str);
    void operate(const std::string &operateur);
private:
    Pile d_pile;
};

#endif //CALCULATRICE_NPI_CALCULATRICE_H
