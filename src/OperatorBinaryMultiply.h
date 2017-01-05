#ifndef CALCULATRICE_NPI_OPERATORBONARYMULTIPLY_H
#define CALCULATRICE_NPI_OPERATORBONARYMULTIPLY_H

#include "OperatorBinary.h"

class OperatorBinaryMultiply: public OperatorBinary
{
public:
    OperatorBinaryMultiply() = default;
    virtual double operate(double val1, double val2);
};


#endif //CALCULATRICE_NPI_OPERATORBONARYMULTIPLY_H
