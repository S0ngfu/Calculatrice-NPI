//
// Created by Simon on 15/12/2016.
//

#ifndef CALCULATRICE_NPI_OPERATORUNARYSQUARE_H
#define CALCULATRICE_NPI_OPERATORUNARYSQUARE_H

#include "OperatorUnary.h"

class OperatorUnarySquare: public OperatorUnary {
public:
    OperatorUnarySquare() = default;
    virtual double operate(double val) override;
};


#endif //CALCULATRICE_NPI_OPERATORUNARYSQUARE_H
