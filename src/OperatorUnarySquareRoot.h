#ifndef CALCULATRICE_NPI_OPERATORUNARYSQUAREROOT_H
#define CALCULATRICE_NPI_OPERATORUNARYSQUAREROOT_H

#include "OperatorUnary.h"
#include "cmath"

class OperatorUnarySquareRoot: public OperatorUnary
{
public:
    OperatorUnarySquareRoot()=default;
    virtual double operate(double val);
};


#endif //CALCULATRICE_NPI_OPERATORUNARYSQUAREROOT_H
