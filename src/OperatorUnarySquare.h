#ifndef CALCULATRICE_NPI_OPERATORUNARYSQUARE_H
#define CALCULATRICE_NPI_OPERATORUNARYSQUARE_H

#include "OperatorUnary.h"

class OperatorUnarySquare: public OperatorUnary {
public:
    OperatorUnarySquare() = default;
    virtual double operate(double val) override;
};


#endif //CALCULATRICE_NPI_OPERATORUNARYSQUARE_H
