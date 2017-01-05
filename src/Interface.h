#ifndef CALCULATRICE_NPI_INTERFACE_H
#define CALCULATRICE_NPI_INTERFACE_H


#include <string>
#include "Pile.h"
#include "Calculatrice.h"

class Interface
{
public:
    virtual void run()=0;
    virtual void initialize()=0;
    virtual bool input()=0;
    virtual void updateOutput()=0;
    Calculatrice d_calc;
};


#endif //CALCULATRICE_NPI_INTERFACE_H
