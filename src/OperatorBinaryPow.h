#ifndef CALCULATRICE_NPI_OPERATORBINARYPOW_H
#define CALCULATRICE_NPI_OPERATORBINARYPOW_H

#include "OperatorBinary.h"
#include "cmath"

class OperatorBinaryPow: public OperatorBinary
{
public:
    ///
    /// \brief Constructeur par défaut
    OperatorBinaryPow() = default;

    ///
    /// \brief Effectue une puissance entre deux paramètres
    /// \param[in] val1 : Valeur subissance la puissance
    /// \param[in] val2 : Puissance
    /// \return Le résultat de la puissance
    virtual double operate(double val1, double val2) override;
};


#endif //CALCULATRICE_NPI_OPERATORBINARYPOW_H
