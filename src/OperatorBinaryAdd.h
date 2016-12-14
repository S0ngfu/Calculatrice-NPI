//
// Created by Songfu on 14/12/2016.
//

#ifndef CALCULATRICE_NPI_OPERATORBINARYADD_H
#define CALCULATRICE_NPI_OPERATORBINARYADD_H

#include "OperatorBinary.h"

class OperatorBinaryAdd: public OperatorBinary {
public:
    OperatorBinaryAdd();
    virtual double operate(double val1, double val2) override;
};


#endif //CALCULATRICE_NPI_OPERATORBINARYADD_H
