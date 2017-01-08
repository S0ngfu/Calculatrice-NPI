#ifndef CALCULATRICE_NPI_OPERATORBINARY_H
#define CALCULATRICE_NPI_OPERATORBINARY_H

#include "Operator.h"

class OperatorBinary: public Operator {
public:
	///
	/// \brief Destructeur par défaut
    virtual ~OperatorBinary() = default;
    
    ///
	/// \brief Effectue l'opération binaire
	/// \param[in] val1 : Valeur subissant l'opération binaire
	/// \param[in] val2 : Valeur subissant l'opération binaire
	/// \return Le résultat de l'opération binaire
    virtual double operate(double val1, double val2) =0;
};


#endif //CALCULATRICE_NPI_OPERATORBINARY_H
