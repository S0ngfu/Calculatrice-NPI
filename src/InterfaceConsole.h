#ifndef CALCULATRICE_NPI_INTERFACECONSOLE_H
#define CALCULATRICE_NPI_INTERFACECONSOLE_H

#include "Interface.h"

#include <iostream>

class InterfaceConsole: public Interface
{
public:
    void run() override;
    void initialize() override;
    bool input() override;
    void updateOutput() override;
};


#endif //CALCULATRICE_NPI_INTERFACECONSOLE_H
