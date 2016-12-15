//
// Created by Simon on 15/12/2016.
//

#include "Calculatrice.h"

#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main(int argc, char* argv[])
{
    Pile mypile;
    Calculatrice mycalculatrice;
    bool quit = false;
    while(!quit)
    {
        string inputs;
        cin >> inputs;
        const char *c = inputs.c_str();
        if (mycalculatrice.isOnlyDouble(c))
        {
            double temp = stod(inputs, 0);
            mypile.push(temp);
        }
        else
        {
            mycalculatrice.operateChoice(c);
        }
        cout<<mypile.peek()<<std::endl;
    }
    return 0;
}