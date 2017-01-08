#ifndef CALCULATRICE_NPI_OPERATORUNARYEXPONENTIAL_H
#define CALCULATRICE_NPI_OPERATORUNARYEXPONENTIAL_H

#include "OperatorUnary.h"
#include "cmath"

class OperatorUnaryExponential: public OperatorUnary
{
public:
    ///
    /// \brief Constructeur par défaut
    OperatorUnaryExponential() = default;

    ///
    /// \brief Effectue un exponentielle
    /// \param[in] val1 : Valeur à laquelle appliqué l'exponentielle
    /// \return Le résultat de l'exponentielle
    virtual double operate(double val);
};


#endif //CALCULATRICE_NPI_OPERATORUNARYEXPONENTIAL_H
