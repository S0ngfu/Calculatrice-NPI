#ifndef CALCULATRICE_NPI_OPERATORBINARYADD_H
#define CALCULATRICE_NPI_OPERATORBINARYADD_H

#include "OperatorBinary.h"

class OperatorBinaryAdd: public OperatorBinary
{
public:
    OperatorBinaryAdd() = default;
    virtual double operate(double val1, double val2) override;
};

#endif //CALCULATRICE_NPI_OPERATORBINARYADD_H
