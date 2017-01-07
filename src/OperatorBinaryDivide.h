#ifndef CALCULATRICE_NPI_OPERATORBINARYDIVIDE_H
#define CALCULATRICE_NPI_OPERATORBINARYDIVIDE_H

#include "OperatorBinary.h"

class OperatorBinaryDivide: public OperatorBinary
{
public:
	///
	/// \brief Constructeur par défaut
    OperatorBinaryDivide() = default;
    
    ///
	/// \brief Effectue une division entre deux paramètres
	/// \param[in] val1 : Dividende
	/// \param[in] val2 : Diviseur
	/// \return Le résultat de la division
    virtual double operate(double val1, double val2) override;
};


#endif //CALCULATRICE_NPI_OPERATORBINARYDIVIDE_H
