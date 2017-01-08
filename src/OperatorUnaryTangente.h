#ifndef CALCULATRICE_NPI_OPERATORUNARYTANGENTE_H
#define CALCULATRICE_NPI_OPERATORUNARYTANGENTE_H

#include "OperatorUnary.h"
#include "cmath"

class OperatorUnaryTangente: public OperatorUnary
{
public:
    ///
    /// \brief Constructeur par défaut
    OperatorUnaryTangente() = default;

    ///
    /// \brief Effectue un tangente
    /// \param[in] val1 : Valeur à laquelle appliqué tangente
    /// \return Le résultat du tangente
    virtual double operate(double val);
};


#endif //CALCULATRICE_NPI_OPERATORUNARYTANGENTE_H
