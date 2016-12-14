//
// Created by Simon on 06/12/2016.
//


#include <string>
#include <iostream>
#include "Pile.h"

#include "OperatorBinaryAdd.h"

bool isOnlyDouble(const char* str)
{
    char* endptr = 0;
    strtod(str, &endptr);

    return !(*endptr != '\0' || endptr == str);
}

int main(int argc, char* argv[])
{
    Pile mypile;
    bool quit = false;
    while(!quit) {
        std::string inputs;
        std::cin >> inputs;
        const char *c = inputs.c_str();
        if (isOnlyDouble(c)) {
            double temp = stod(inputs, 0);
            mypile.push(temp);
        } else {
            switch (c[0]) {
                case '+': {
                    OperatorBinaryAdd op;
                    mypile.push(op.operate(mypile.return_pop_back(), mypile.return_pop_back()));
                    break;
                }
                case 'q': {
                    quit = true;
                    break;
                }
                default:
                    break;
            }
        }
        std::cout<<mypile.peek()<<std::endl;
    }
    return 0;
}