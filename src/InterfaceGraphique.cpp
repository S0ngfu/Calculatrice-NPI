#include "InterfaceGraphique.h"

void InterfaceGraphique::run()
{
    initialize();
    while(input() != "quit")
        updateOutput();
}

void InterfaceGraphique::initialize()
{
    /*
// Notre fenêtre
    SDL_Window* fenetre(0);
    // Initialisation de la SDL
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "Erreur lors de l'initialisation de la SDL : " << SDL_GetError() << std::endl;
        SDL_Quit();
    }
    // Création de la fenêtre
    fenetre = SDL_CreateWindow("Test SDL 2.0", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
    // On quitte la SDL
    SDL_DestroyWindow(fenetre);
    SDL_Quit();
    */
}

std::string InterfaceGraphique::input()
{
    return "quit";
}

void InterfaceGraphique::updateOutput()
{
    std::vector<double> temp = d_calc.getPile().peekLast5();
    for(int i = 0 ; i < temp.size() ; i++)
    {

    }

}
