#ifndef CALCULATRICE_NPI_OPERATORUNARYCHANGESIGN_H
#define CALCULATRICE_NPI_OPERATORUNARYCHANGESIGN_H

#include "OperatorUnary.h"


class OperatorUnaryChangeSign : public OperatorUnary
{
public:

    ///
    /// \brief Constructeur par défaut
    OperatorUnaryChangeSign() = default;

    ///
    /// \brief Change le signe du paramètre
    /// \param[in] val : Valeur à changer de signe
    /// \return Le résultat du changement de signe
    virtual double operate(double val) override;
};


#endif //CALCULATRICE_NPI_OPERATORUNARYCHANGESIGN_H
