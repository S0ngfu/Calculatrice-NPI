#ifndef CALCULATRICE_NPI_INTERFACEGRAPHIQUE_H
#define CALCULATRICE_NPI_INTERFACEGRAPHIQUE_H

#include "Interface.h"
#include <iostream>

class InterfaceGraphique: public Interface
{
public:
	///
	/// \brief Lance l'interface graphique
    void run() override;
    
    ///
	/// \brief Initialise l'interface
    void initialize() override;
    
    ///
	/// \brief S'occupe de l'input et l'envoie � la calculatrice
	/// \return True si la calculatrice doit s'arr�ter, False sinon
    bool input() override;
    
    
    ///
	/// \brief Met � jour l'interface graphique
    void updateOutput() override;
};


#endif //CALCULATRICE_NPI_INTERFACEGRAPHIQUE_H
