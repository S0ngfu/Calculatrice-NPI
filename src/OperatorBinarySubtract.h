#ifndef CALCULATRICE_NPI_OPERATORBINARYSUBTRACT_H
#define CALCULATRICE_NPI_OPERATORBINARYSUBTRACT_H

#include "OperatorBinary.h"

class OperatorBinarySubtract: public OperatorBinary
{
public:
	///
	/// \brief Constructeur par d�faut
    OperatorBinarySubtract() = default;
    
    ///
	/// \brief Effectue l'op�ration "soustraction"
	/// \param[in] val1 : Valeur soustraite
	/// \param[in] val2 : Valeur � soustraire
	/// \return Le r�sultat de la soustraction
    virtual double operate(double val1, double val2) override;
};


#endif //CALCULATRICE_NPI_OPERATORBINARYSUBTRACT_H
