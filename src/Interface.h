#ifndef CALCULATRICE_NPI_INTERFACE_H
#define CALCULATRICE_NPI_INTERFACE_H


#include <string>
#include "Pile.h"
#include "Calculatrice.h"

class Interface
{
public:
	///
	/// \brief Lance l'interface
    virtual void run()=0;
    
    ///
	/// \brief Initialise l'interface
    virtual void initialize()=0;
    
    ///
	/// \brief S'occupe de l'input et l'envoie à la calculatrice
	/// \return True si la calculatrice doit s'arrêter, False sinon
    virtual std::string input()=0;

    ///
	/// \brief Met à jour l'interface
    virtual void updateOutput()=0;
    
    Calculatrice d_calc;
};


#endif //CALCULATRICE_NPI_INTERFACE_H
