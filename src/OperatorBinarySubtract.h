#ifndef CALCULATRICE_NPI_OPERATORBINARYSUBTRACT_H
#define CALCULATRICE_NPI_OPERATORBINARYSUBTRACT_H

#include "OperatorBinary.h"

class OperatorBinarySubtract: public OperatorBinary
{
public:
	///
	/// \brief Constructeur par défaut
    OperatorBinarySubtract() = default;
    
    ///
	/// \brief Effectue l'opération "soustraction"
	/// \param[in] val1 : Valeur soustraite
	/// \param[in] val2 : Valeur à soustraire
	/// \return Le résultat de la soustraction
    virtual double operate(double val1, double val2) override;
};


#endif //CALCULATRICE_NPI_OPERATORBINARYSUBTRACT_H
