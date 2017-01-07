#ifndef CALCULATRICE_NPI_OPERATORBINARY_H
#define CALCULATRICE_NPI_OPERATORBINARY_H

#include "Operator.h"

class OperatorBinary: public Operator {
public:
	///
	/// \brief Destructeur par d�faut
    virtual ~OperatorBinary() = default;
    
    ///
	/// \brief Effectue l'op�ration binaire
	/// \param[in] val1 : Valeur subissant l'op�ration binaire
	/// \param[in] val2 : Valeur subissant l'op�ration binaire
	/// \return Le r�sultat de l'op�ration binaire
    virtual double operate(double val1, double val2) =0;
};


#endif //CALCULATRICE_NPI_OPERATORBINARY_H
