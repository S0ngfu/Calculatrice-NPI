#ifndef CALCULATRICE_NPI_OPERATORUNARYSQUARE_H
#define CALCULATRICE_NPI_OPERATORUNARYSQUARE_H

#include "OperatorUnary.h"

class OperatorUnarySquare: public OperatorUnary {
public:
	///
	/// \brief Constructeur par défaut
    OperatorUnarySquare() = default;
    
    ///
	/// \brief Effectue une puissance deux sur un paramètre
	/// \param[in] val1 : Valeur à mettre au carré
	/// \return Le résultat du carré
    virtual double operate(double val) override;
};


#endif //CALCULATRICE_NPI_OPERATORUNARYSQUARE_H
