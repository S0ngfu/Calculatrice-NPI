#ifndef CALCULATRICE_NPI_OPERATORUNARYSQUAREROOT_H
#define CALCULATRICE_NPI_OPERATORUNARYSQUAREROOT_H

#include "OperatorUnary.h"
#include "cmath"

class OperatorUnarySquareRoot: public OperatorUnary
{
public:
	///
	/// \brief Constructeur par défaut
    OperatorUnarySquareRoot() = default;
    
    ///
	/// \brief Effectue une racine carrée
	/// \param[in] val1 : Valeur à mettre en racine carrée
	/// \return Le résultat de la racine carrée
    virtual double operate(double val);
};


#endif //CALCULATRICE_NPI_OPERATORUNARYSQUAREROOT_H
