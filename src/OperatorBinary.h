#ifndef CALCULATRICE_NPI_OPERATORBINARY_H
#define CALCULATRICE_NPI_OPERATORBINARY_H

#include "Operator.h"

class OperatorBinary: public Operator {
public:
    virtual ~OperatorBinary() = default;
    virtual double operate(double val1, double val2) =0;
};


#endif //CALCULATRICE_NPI_OPERATORBINARY_H
