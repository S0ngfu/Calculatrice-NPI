//
// Created by Simon on 15/12/2016.
//

#ifndef CALCULATRICE_NPI_OPERATOR_H
#define CALCULATRICE_NPI_OPERATOR_H

class Operator {
public:
    virtual ~Operator() = default;
    virtual double operate(double val1) =0;
};

#endif //CALCULATRICE_NPI_OPERATOR_H
