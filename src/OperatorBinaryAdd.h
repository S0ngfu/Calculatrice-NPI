#ifndef CALCULATRICE_NPI_OPERATORBINARYADD_H
#define CALCULATRICE_NPI_OPERATORBINARYADD_H

#include "OperatorBinary.h"

class OperatorBinaryAdd: public OperatorBinary
{
public:
	///
	/// \brief Constructeur par d�faut
    OperatorBinaryAdd() = default;
    
    ///
	/// \brief Effectue une addition entre deux param�tres
	/// \param[in] val1 : Valeur � ajouter
	/// \param[in] val2 : Valeur ajout�e
	/// \return Le r�sultat de l'addition
    virtual double operate(double val1, double val2) override;
};

#endif //CALCULATRICE_NPI_OPERATORBINARYADD_H
