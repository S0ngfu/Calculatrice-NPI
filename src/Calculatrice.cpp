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
#include <cstring>

bool Calculatrice::isOnlyDouble(const char* str)
{
    char* endptr = 0;
    strtod(str, &endptr);

    return !(*endptr != '\0' || endptr == str);
}

std::string Calculatrice::operateChoice(const char &operateur)
{
    OperatorBinary* operationBin;
    OperatorUnary* operationUn;
    switch (operateur)
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
        case 'a':
            d_saveValue.push_back(d_pile.peekLast());
            break;
        case 'g':
            if(!d_saveValue.empty()) {
                showSavedValue();
                putSavedValueInPile();
            }
            break;
        case 'v':
            saveCommand();
            break;
        case 'x':
            executeSavedCommand();
            break;
        case 'h':
            return "+ : Addition\n- : Soustraction\n* : Multiplication\n/ : Division\ns : Mettre au carre\nr : Mettre a la racine carre\nw : Echange les deux dernieres valeurs\nd : Retire la derniere valeur\ni : Change le signe de la derniere valeur\nc : Compose par cosinus\nu : Compose par sinus\nt : Compose par tangente\ne : Compose par exponentielle\nn : Compose par logarithme neperien\no : Compose par logarithme decimal\np : Effectue x puissance y\na : Sauve la derniere valeur\ng : Permet de recuperer une valeur sauvegarder\nv : Permet de sauver une liste de commande\nx : Permet d'executer la liste de commande";
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
        exceptions = operateChoice(c[0]);
    }
    return exceptions;
}

Pile Calculatrice::getPile()
{
    return d_pile;
}

void Calculatrice::showSavedValue()
{
    for(int i = 0 ; i < d_saveValue.size() ; i++)
    {
        std::cout<<i+1<<" : "<<d_saveValue[i]<<std::endl;
    }
    std::cout<<"Rentrez l'index de la valeur à remettre dans la pile"<<std::endl;
}

void Calculatrice::putSavedValueInPile() {
    int index;
    do
    {
        std::cin>>index;
    } while(index < 1 && index > d_saveValue.size()+1);
    d_pile.push(d_saveValue[index-1]);
    d_saveValue[index-1] = d_saveValue[d_saveValue.size()-1];
    d_saveValue.pop_back();
}

void Calculatrice::saveCommand()
{
    std::cout<<"Continue de sauvegarder la liste de commande tant qu'il n'y a pas de q"<<std::endl;
    d_saveCommand = "";
    std::string input;
    do
    {
        std::cin>>input;
        d_saveCommand += input + " ";
    } while(input.front() != 'q');
}

void Calculatrice::executeSavedCommand()
{
    if(!d_saveCommand.empty())
    {
        std::string substring, temp = d_saveCommand;
        size_t pos = 0, len = 0;
        while(!temp.empty())
        {
            len = temp.find(" ");
            substring = temp.substr(pos, len);
            input(substring);
            temp.erase(pos, len+1);
        }
    }
}

