#ifndef CALCULATRICE_NPI_OPERATORUNARYDECIMALLOGARITHM_H
#define CALCULATRICE_NPI_OPERATORUNARYDECIMALLOGARITHM_H

#include "OperatorUnary.h"
#include "cmath"

class OperatorUnaryDecimalLogarithm: public OperatorUnary
{
public:
    ///
    /// \brief Constructeur par défaut
    OperatorUnaryDecimalLogarithm() = default;

    ///
    /// \brief Effectue un logarithme décimal
    /// \param[in] val1 : Valeur à laquelle appliqué le logarithme décimal
    /// \return Le résultat du logarithme décimal
    virtual double operate(double val);
};


#endif //CALCULATRICE_NPI_OPERATORUNARYDECIMALLOGARITHM_H
