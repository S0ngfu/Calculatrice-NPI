#ifndef CALCULATRICE_NPI_OPERATORBINARYADD_H
#define CALCULATRICE_NPI_OPERATORBINARYADD_H

#include "OperatorBinary.h"

class OperatorBinaryAdd: public OperatorBinary
{
public:
	///
	/// \brief Constructeur par défaut
    OperatorBinaryAdd() = default;
    
    ///
	/// \brief Effectue une addition entre deux paramètres
	/// \param[in] val1 : Valeur à ajouter
	/// \param[in] val2 : Valeur ajoutée
	/// \return Le résultat de l'addition
    virtual double operate(double val1, double val2) override;
};

#endif //CALCULATRICE_NPI_OPERATORBINARYADD_H
