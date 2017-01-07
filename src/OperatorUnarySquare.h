#ifndef CALCULATRICE_NPI_OPERATORUNARYSQUARE_H
#define CALCULATRICE_NPI_OPERATORUNARYSQUARE_H

#include "OperatorUnary.h"

class OperatorUnarySquare: public OperatorUnary {
public:
	///
	/// \brief Constructeur par d�faut
    OperatorUnarySquare() = default;
    
    ///
	/// \brief Effectue une puissance deux sur un param�tre
	/// \param[in] val1 : Valeur � mettre au carr�
	/// \return Le r�sultat du carr�
    virtual double operate(double val) override;
};


#endif //CALCULATRICE_NPI_OPERATORUNARYSQUARE_H
