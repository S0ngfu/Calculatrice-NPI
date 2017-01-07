#ifndef CALCULATRICE_NPI_OPERATORUNARY_H
#define CALCULATRICE_NPI_OPERATORUNARY_H

#include "Operator.h"

class OperatorUnary: public Operator {
public:
	///
	/// \brief Destructeur par d�faut
    virtual ~OperatorUnary() = default;
    
    ///
	/// \brief Effectue une op�ration unaire
	/// \param[in] val1 : Valeur subissant l'op�ration unaire
	/// \return Le r�sultat de l'op�ration
    virtual double operate(double val) =0;
};


#endif //CALCULATRICE_NPI_OPERATORUNARY_H

