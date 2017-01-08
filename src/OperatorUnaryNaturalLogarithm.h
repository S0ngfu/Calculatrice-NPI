#ifndef CALCULATRICE_NPI_OPERATORUNARYNATURALLOGARITHM_H
#define CALCULATRICE_NPI_OPERATORUNARYNATURALLOGARITHM_H

#include "OperatorUnary.h"
#include "cmath"

class OperatorUnaryNaturalLogarithm: public OperatorUnary
{
public:
    ///
    /// \brief Constructeur par défaut
    OperatorUnaryNaturalLogarithm() = default;

    ///
    /// \brief Effectue un logarithme népérien
    /// \param[in] val1 : Valeur à laquelle appliqué le logarithme népérien
    /// \return Le résultat du logarithme népérien
    virtual double operate(double val);
};


#endif //CALCULATRICE_NPI_OPERATORUNARYNATURALLOGARITHM_H
