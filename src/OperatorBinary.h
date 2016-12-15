//
// Created by Songfu on 14/12/2016.
//

#ifndef CALCULATRICE_NPI_OPERATORBINARY_H
#define CALCULATRICE_NPI_OPERATORBINARY_H

class OperatorBinary {
public:
    virtual ~OperatorBinary() = default;
    virtual double operate(double val1, double val2) =0;
};


#endif //CALCULATRICE_NPI_OPERATORBINARY_H
