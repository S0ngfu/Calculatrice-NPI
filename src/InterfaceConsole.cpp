#include "InterfaceConsole.h"

void InterfaceConsole::run()
{
    initialize();
    while(!input())
        updateOutput();
}

void InterfaceConsole::initialize()
{
    std::cout<<"Voici l'interface console de notre calculatrice"<<std::endl;
}

bool InterfaceConsole::input()
{
    std::string inputs;
    std::cin>>inputs;
    return d_calc.input(inputs);
}

void InterfaceConsole::updateOutput()
{
    std::vector<double> temp = d_calc.getPile().peekLast5();
    for(int i = 0 ; i < temp.size() ; i++)
    {
        std::cout<<temp[i]<<" ";
    }
    std::cout<<std::endl;
}
