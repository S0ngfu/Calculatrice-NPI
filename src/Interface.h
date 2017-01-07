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
	/// \brief S'occupe de l'input et l'envoie � la calculatrice
	/// \return True si la calculatrice doit s'arr�ter, False sinon
    virtual bool input()=0;
    
    
    ///
	/// \brief Met � jour l'interface
    virtual void updateOutput()=0;
    
    Calculatrice d_calc;
};


#endif //CALCULATRICE_NPI_INTERFACE_H
