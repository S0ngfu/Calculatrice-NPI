#include "Calculatrice.h"
#include "OperatorBinaryAdd.h"
#include "OperatorUnarySquare.h"
#include "OperatorBinarySubtract.h"
#include "OperatorBinaryDivide.h"
#include "OperatorBinaryMultiply.h"
#include "OperatorUnarySquareRoot.h"
#include "OperatorUnaryChangeSign.h"
#include "OperatorUnaryCosinus.h"
#include "OperatorUnarySinus.h"
#include "OperatorUnaryTangente.h"
#include "OperatorUnaryExponential.h"
#include "OperatorUnaryNaturalLogarithm.h"
#include "OperatorUnaryDecimalLogarithm.h"
#include "OperatorBinaryPow.h"

#include <iostream>

bool Calculatrice::isOnlyDouble(const char* str)
{
    char* endptr = 0;
    strtod(str, &endptr);

    return !(*endptr != '\0' || endptr == str);
}

std::string Calculatrice::operateChoice(const std::string &operateur)
{
    OperatorBinary* operationBin;
    OperatorUnary* operationUn;
    switch (operateur[0])
    {
        case '+':
            operationBin = new OperatorBinaryAdd();
            addOperate(operationBin);
            break;
        case '-':
            operationBin = new OperatorBinarySubtract();
            addOperate(operationBin);
            break;
        case '*':
            operationBin = new OperatorBinaryMultiply();
            addOperate(operationBin);
            break;
        case '/':
            if(d_pile.peekLast() != 0) {
                operationBin = new OperatorBinaryDivide();
                addOperate(operationBin);
            } else
                return "Erreur : division par 0";
            break;
        case 's':
            operationUn = new OperatorUnarySquare();
            addOperate(operationUn);
            break;
        case 'r':
            if(d_pile.peekLast() >= 0) {
                operationUn = new OperatorUnarySquareRoot();
                addOperate(operationUn);
            } else
                return "Erreur : racine carre d'un nombre negatif";
            break;
        case 'w':
            d_pile.swap();
            break;
        case 'd':
            d_pile.pop_back();
            break;
        case 'i':
            operationUn = new OperatorUnaryChangeSign();
            addOperate(operationUn);
            break;
        case 'c':
            operationUn = new OperatorUnaryCosinus();
            addOperate(operationUn);
            break;
        case 'u':
            operationUn = new OperatorUnarySinus();
            addOperate(operationUn);
            break;
        case 't':
            operationUn = new OperatorUnaryTangente();
            addOperate(operationUn);
            break;
        case 'e':
            operationUn = new OperatorUnaryExponential();
            addOperate(operationUn);
            break;
        case 'n':
            operationUn = new OperatorUnaryNaturalLogarithm();
            addOperate(operationUn);
            break;
        case 'o':
            operationUn = new OperatorUnaryDecimalLogarithm();
            addOperate(operationUn);
            break;
        case 'p':
            operationBin = new OperatorBinaryPow();
            addOperate(operationBin);
            break;
        case 'h':
            return "+ : Addition\n- : Soustraction\n* : Multiplication\n/ : Division\ns : Mettre au carre\nr : Mettre a la racine carre\nw : Echange les deux dernieres valeurs\nd : Retire la derniere valeur\ni : Change le signe de la derniere valeur\nc : Compose par cosinus\nu : Compose par sinus\nt : Compose par tangente\ne : Compose par exponentielle\nn : Compose par logarithme neperien\no : Compose par logarithme decimal\np : Effectue x puissance y";
        case 'q':
            return "quit";
        default:
            break;
    }
    return "";
}

void Calculatrice::addOperate(OperatorBinary* operation)
{
    if(d_pile.size() >= 2)
        d_pile.push(operation->operate(d_pile.return_pop_back(), d_pile.return_pop_back()));
}

void Calculatrice::addOperate(OperatorUnary* operation)
{
    if(d_pile.size() >= 1)
        d_pile.push(operation->operate(d_pile.return_pop_back()));
}

std::string Calculatrice::input(std::string& inputs)
{
    std::string exceptions;
    const char *c = inputs.c_str();
    if (isOnlyDouble(c))
    {
        double temp = stod(inputs, 0);
        d_pile.push(temp);
    }
    else
    {
        exceptions = operateChoice(c);
    }
    return exceptions;
}

Pile Calculatrice::getPile()
{
    return d_pile;
}
