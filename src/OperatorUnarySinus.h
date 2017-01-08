#ifndef CALCULATRICE_NPI_OPERATORUNARYSINUS_H
#define CALCULATRICE_NPI_OPERATORUNARYSINUS_H

#include "OperatorUnary.h"
#include "cmath"

class OperatorUnarySinus: public OperatorUnary
{
public:
    ///
    /// \brief Constructeur par défaut
    OperatorUnarySinus() = default;

    ///
    /// \brief Effectue un sinus
    /// \param[in] val1 : Valeur à laquelle appliqué sinus
    /// \return Le résultat du sinus
    virtual double operate(double val);
};


#endif //CALCULATRICE_NPI_OPERATORUNARYSINUS_H
