#include "InterfaceGraphique.h"

void InterfaceGraphique::run()
{
    initialize();
    while(!input())
        updateOutput();
}

void InterfaceGraphique::initialize()
{
	
}

bool InterfaceGraphique::input()
{
	
}

void InterfaceGraphique::updateOutput()
{
    std::vector<double> temp = d_calc.getPile().peekLast5();
    for(int i = 0 ; i < temp.size() ; i++)
    {

    }

}
