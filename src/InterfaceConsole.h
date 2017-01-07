#ifndef CALCULATRICE_NPI_INTERFACECONSOLE_H
#define CALCULATRICE_NPI_INTERFACECONSOLE_H

#include "Interface.h"

#include <iostream>

class InterfaceConsole: public Interface
{
public:
	///
	/// \brief Lance l'interface console
    void run() override;
    
    ///
	/// \brief Initialise l'interface console
    void initialize() override;
    
    ///
	/// \brief Re�oit une chaine de caract�re et l'envoie � la calculatrice qui la g�re
	/// \return True si la calculatrice doit s'arr�ter, False sinon
    bool input() override;
    
    ///
	/// \brief Affiche les cinq derniers �l�ments de la pile
    void updateOutput() override;
};


#endif //CALCULATRICE_NPI_INTERFACECONSOLE_H
