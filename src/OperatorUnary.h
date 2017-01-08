#ifndef CALCULATRICE_NPI_OPERATORUNARY_H
#define CALCULATRICE_NPI_OPERATORUNARY_H

#include "Operator.h"

class OperatorUnary: public Operator {
public:
	///
	/// \brief Destructeur par défaut
    virtual ~OperatorUnary() = default;
    
    ///
	/// \brief Effectue une opération unaire
	/// \param[in] val1 : Valeur subissant l'opération unaire
	/// \return Le résultat de l'opération
    virtual double operate(double val) =0;
};


#endif //CALCULATRICE_NPI_OPERATORUNARY_H

