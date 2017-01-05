#ifndef CALCULATRICE_NPI_INTERFACEGRAPHIQUE_H
#define CALCULATRICE_NPI_INTERFACEGRAPHIQUE_H

#include "Interface.h"
#include <iostream>

class InterfaceGraphique: public Interface
{
public:
    void run() override;
    void initialize() override;
    bool input() override;
    void updateOutput() override;
};


#endif //CALCULATRICE_NPI_INTERFACEGRAPHIQUE_H