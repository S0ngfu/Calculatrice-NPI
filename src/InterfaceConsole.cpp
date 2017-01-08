#include "InterfaceConsole.h"

void InterfaceConsole::run()
{
    initialize();
    std::string in;
    in = input();
    while(in != "quit") {
        updateOutput();
        if(!in.empty())
            std::cout<<"ERROR : "<<in<<std::endl;
        in = input();
    }
}

void InterfaceConsole::initialize()
{
    std::cout<<"Voici l'interface console de notre calculatrice\nEntrez h pour voir les commandes disponibles"<<std::endl;
    //rajouter les raccourcis pour gérer calculatrice
}

std::string InterfaceConsole::input()
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
