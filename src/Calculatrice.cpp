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
                case '+':
                    mypile.push(OperatorBinaryAdd::operate(mypile.peek_pop(), mypile.peek_pop()));
                    break;
                case 'q':
                    quit=true;
                default:
                    break;
            }
        }
    }
    return 0;
}