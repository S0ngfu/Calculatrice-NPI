#ifndef CALCULATRICE_NPI_OPERATORBINARYDIVIDE_H
#define CALCULATRICE_NPI_OPERATORBINARYDIVIDE_H

#include "OperatorBinary.h"

class OperatorBinaryDivide: public OperatorBinary
{
public:
    OperatorBinaryDivide() = default;
    virtual double operate(double val1, double val2) override;
};


#endif //CALCULATRICE_NPI_OPERATORBINARYDIVIDE_H
