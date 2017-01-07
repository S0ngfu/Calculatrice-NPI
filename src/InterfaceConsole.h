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
	/// \brief Reçoit une chaine de caractère et l'envoie à la calculatrice qui la gère
	/// \return True si la calculatrice doit s'arrêter, False sinon
    bool input() override;
    
    ///
	/// \brief Affiche les cinq derniers éléments de la pile
    void updateOutput() override;
};


#endif //CALCULATRICE_NPI_INTERFACECONSOLE_H
