#ifndef CALCULATRICE_NPI_OPERATORBONARYMULTIPLY_H
#define CALCULATRICE_NPI_OPERATORBONARYMULTIPLY_H

#include "OperatorBinary.h"

class OperatorBinaryMultiply: public OperatorBinary
{
public:
	///
	/// \brief Constructeur par d�faut
    OperatorBinaryMultiply() = default;
    
    ///
	/// \brief Effectue une multiplication entre deux param�tres
	/// \param[in] val1 : Valeur � multiplier
	/// \param[in] val2 : Multiplieur
	/// \return Le r�sultat de la multiplication
    virtual double operate(double val1, double val2);
};


#endif //CALCULATRICE_NPI_OPERATORBONARYMULTIPLY_H
