//
// Created by Songfu on 14/12/2016.
//

#ifndef CALCULATRICE_NPI_OPERATORUNARY_H
#define CALCULATRICE_NPI_OPERATORUNARY_H

#include "Operator.h"

class OperatorUnary: public Operator {
public:
    virtual ~OperatorUnary() = default;
    virtual double operate(double val) =0;
};


#endif //CALCULATRICE_NPI_OPERATORUNARY_H

