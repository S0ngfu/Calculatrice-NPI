#ifndef CALCULATRICE_NPI_INTERFACEGRAPHIQUE_H
#define CALCULATRICE_NPI_INTERFACEGRAPHIQUE_H

#include "Interface.h"
#include <iostream>

class InterfaceGraphique: public Interface, public wxApp
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
    bool input() override;
    
    
    ///
	/// \brief Met à jour l'interface graphique
    void updateOutput() override;
private:
	AffichageGraphique d_affCalc;
};


#endif //CALCULATRICE_NPI_INTERFACEGRAPHIQUE_H
