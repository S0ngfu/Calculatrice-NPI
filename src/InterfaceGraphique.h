#ifndef CALCULATRICE_NPI_INTERFACEGRAPHIQUE_H
#define CALCULATRICE_NPI_INTERFACEGRAPHIQUE_H

#include "Interface.h"
#include <iostream>
//#include "SDL.h"

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
	/// \brief S'occupe de l'input et l'envoie à la calculatrice
	/// \return True si la calculatrice doit s'arrêter, False sinon
    std::string input() override;
    
    
    ///
	/// \brief Met à jour l'interface graphique
    void updateOutput() override;
};


#endif //CALCULATRICE_NPI_INTERFACEGRAPHIQUE_H
