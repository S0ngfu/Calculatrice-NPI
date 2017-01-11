#include "InterfaceConsole.h"

void InterfaceConsole::run()
{
    initialize();
    bool quit;
    std::string inputs;
    std::cin>>inputs;
    quit = input(inputs);
    while(!quit) {
        updateOutput();
        std::cin>>inputs;
        quit = input(inputs);
    }
}

void InterfaceConsole::initialize()
{
    std::cout<<"Voici l'interface console de notre calculatrice\nEntrez h pour voir les commandes disponibles\nPour utiliser la calculatrice, rentrez chaque commande avec un espace entre. (Ex : x y op z op)"<<std::endl;
}

bool InterfaceConsole::input(std::string inputs)
{
    if(d_calc.isOnlyDouble(inputs.c_str()))
    {
        double temp = stod(inputs,0);
        d_calc.pushInPile(temp);
    } else
    {
        switch(inputs[0])
        {
            default:
                break;
            case 'h':
                showHelp();
                break;
            case 'q':
                return true;
            case '+':
                d_calc.add();
                break;
            case '-':
                d_calc.substract();
                break;
            case '*':
                d_calc.multiply();
                break;
            case '/':
                if(d_calc.getPile().peekLast() != 0.0)
                    d_calc.divide();
                else
                    std::cout << "Erreur : division par 0" << std::endl;
                break;
            case 's':
                d_calc.square();
                break;
            case 'r':
                if(d_calc.getPile().peekLast() >= 0.0)
                    d_calc.squareRoot();
                else
                    std::cout << "Erreur : racine carre d'un nombre negatif" << std::endl;
                break;
            case 'c':
                d_calc.cosinus();
                break;
            case 'u':
                d_calc.sinus();
                break;
            case 't':
                d_calc.tangente();
                break;
            case 'e':
                d_calc.exponential();
                break;
            case 'n':
                d_calc.naturalLogarithm();
                break;
            case 'o':
                d_calc.decimalLogarithm();
                break;
            case 'p':
                d_calc.pow();
                break;
            case 'w':
                d_calc.swap();
                break;
            case 'd':
                d_calc.pop_back();
                break;
            case 'i':
                d_calc.changeSign();
                break;
            case 'a':
                d_calc.saveValue();
                break;
            case 'g':
                if(d_calc.getNumberSavedValue() != 0)
                {
                    showSavedValue();
                    std::cout << "Rentrez l'index de la valeur a recuperer" << std::endl;
                    d_calc.putSavedValueInPile(inputInt(d_calc.getNumberSavedValue()));
                } else
                    std::cout<<"Il y a aucune valeur sauvegardes"<<std::endl;
                break;
            case 'v':
                saveCommand();
                break;
            case 'x':
                executeCommand();
                break;
            case 'b':
                if(d_calc.getNumberSavedCommand() != 0)
                {
                    showSavedCommand();
                    std::cout << "Rentrez l'index de la liste a supprimer" << std::endl;
                    d_calc.deleteSavedCommand(inputInt(d_calc.getNumberSavedCommand()));
                } else
                    std::cout<<"Il y a aucune liste de commande sauvegardes"<<std::endl;
                break;
        }
    }

    return false;
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

void InterfaceConsole::showHelp()
{
    std::cout<<"h : montre l'aide de commandes"<<std::endl;
    std::cout<<"q : permet d'arreter la calculatrice"<<std::endl;
    std::cout<<"+ : Addition"<<std::endl;
    std::cout<<"- : Soustraction"<<std::endl;
    std::cout<<"* : Multiplication"<<std::endl;
    std::cout<<"/ : Division"<<std::endl;
    std::cout<<"s : Mettre au carre"<<std::endl;
    std::cout<<"r : Mettre a la racine carre"<<std::endl;
    std::cout<<"c : Compose par cosinus"<<std::endl;
    std::cout<<"u : Compose par sinus"<<std::endl;
    std::cout<<"t : Compose par tangente"<<std::endl;
    std::cout<<"e : Compose par exponentielle"<<std::endl;
    std::cout<<"n : Compose par logarithme neperien"<<std::endl;
    std::cout<<"o : Compose par logarithme decimal"<<std::endl;
    std::cout<<"p : Effectue x puissance y"<<std::endl;
    std::cout<<"w : Echange les deux dernieres valeurs"<<std::endl;
    std::cout<<"d : Retire la derniere valeur"<<std::endl;
    std::cout<<"i : Change le signe de la derniere valeur"<<std::endl;
    std::cout<<"a : Sauve la derniere valeur"<<std::endl;
    std::cout<<"g : Permet de recuperer une valeur sauvegarder"<<std::endl;
    std::cout<<"v : Permet de sauver une liste de commande"<<std::endl;
    std::cout<<"x : Permet d'executer la liste de commande"<<std::endl;
    std::cout<<"b : Permet de supprimer une liste de commandes"<<std::endl;
}

int InterfaceConsole::inputInt(int max)
{
    std::cout<<"Rentrez un entier entre 1 et " << max << std::endl;
    int index;
    do {
        std::cin >> index;
    } while (index <= 0 || index >= max+1);
    return index;
}

void InterfaceConsole::showSavedValue()
{
    std::cout<<"Voici les valeurs sauvegardes : "<<std::endl;
    std::vector<double> temp = d_calc.getSavedValue();
    for(int i = 0 ; i < temp.size() ; i++)
        std::cout<<i+1<<" : "<<temp[i]<<std::endl;
}

void InterfaceConsole::showSavedCommand()
{
    std::cout<<"Voici les listes de commandes sauvegardes : "<<std::endl;
    std::vector<std::string> temp = d_calc.getSavedCommand();
    for(int i = 0 ; i < temp.size() ; i++)
    {
        std::cout<<i+1<<" : "<<temp[i]<<std::endl;
    }
}

void InterfaceConsole::saveCommand()
{
    std::cout<<"Continue de sauvegarder la liste de commande tant qu'il n'y a pas de q"<<std::endl;
    std::string commands = "";
    std::string commandToInput;
    std::cin>>commandToInput;
    do
    {
        commands += commandToInput + " ";
        std::cin>>commandToInput;
    } while(commandToInput.front() != 'q');
    d_calc.saveCommand(commands);
}

void InterfaceConsole::executeCommand()
{
    if(d_calc.getNumberSavedCommand() != 0)
    {
        showSavedCommand();
        std::string command = d_calc.getSavedCommand(inputInt(d_calc.getNumberSavedCommand()));
        std::string substring;
        size_t pos = 0, len = 0;
        while (!command.empty())
        {
            len = command.find(" ");
            substring = command.substr(pos, len);
            input(substring);
            command.erase(pos, len + 1);
        }
    } else
        std::cout<<"Il y a aucune liste de commande sauvegardes"<<std::endl;
}
