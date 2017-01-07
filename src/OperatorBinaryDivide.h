#ifndef CALCULATRICE_NPI_OPERATORBINARYDIVIDE_H
#define CALCULATRICE_NPI_OPERATORBINARYDIVIDE_H

#include "OperatorBinary.h"

class OperatorBinaryDivide: public OperatorBinary
{
public:
	///
	/// \brief Constructeur par d�faut
    OperatorBinaryDivide() = default;
    
    ///
	/// \brief Effectue une division entre deux param�tres
	/// \param[in] val1 : Dividende
	/// \param[in] val2 : Diviseur
	/// \return Le r�sultat de la division
    virtual double operate(double val1, double val2) override;
};


#endif //CALCULATRICE_NPI_OPERATORBINARYDIVIDE_H
