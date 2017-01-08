#ifndef CALCULATRICE_NPI_OPERATORUNARYCOSINUS_H
#define CALCULATRICE_NPI_OPERATORUNARYCOSINUS_H

#include "OperatorUnary.h"
#include "cmath"

class OperatorUnaryCosinus: public OperatorUnary
{
public:
    ///
    /// \brief Constructeur par défaut
    OperatorUnaryCosinus() = default;

    ///
    /// \brief Effectue un cosinus
    /// \param[in] val1 : Valeur à laquelle appliqué cosinus
    /// \return Le résultat du cosinus
    virtual double operate(double val);
};


#endif //CALCULATRICE_NPI_OPERATORUNARYCOSINUS_H
