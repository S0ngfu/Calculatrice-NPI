#ifndef CALCULATRICE_NPI_OPERATORBINARYSUBTRACT_H
#define CALCULATRICE_NPI_OPERATORBINARYSUBTRACT_H

#include "OperatorBinary.h"

class OperatorBinarySubtract: public OperatorBinary
{
public:
    OperatorBinarySubtract() =default;
    virtual double operate(double val1, double val2) override;
};


#endif //CALCULATRICE_NPI_OPERATORBINARYSUBTRACT_H