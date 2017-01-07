#ifndef CALCULATRICE_NPI_OPERATORUNARYSQUAREROOT_H
#define CALCULATRICE_NPI_OPERATORUNARYSQUAREROOT_H

#include "OperatorUnary.h"
#include "cmath"

class OperatorUnarySquareRoot: public OperatorUnary
{
public:
	///
	/// \brief Constructeur par d�faut
    OperatorUnarySquareRoot() = default;
    
    ///
	/// \brief Effectue une racine carr�e
	/// \param[in] val1 : Valeur � mettre en racine carr�e
	/// \return Le r�sultat de la racine carr�e
    virtual double operate(double val);
};


#endif //CALCULATRICE_NPI_OPERATORUNARYSQUAREROOT_H
