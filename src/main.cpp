#include "Calculatrice.h"
#include "InterfaceConsole.h"
#include "InterfaceGraphique.h"

int main(int argc, char* argv[])
{
    Interface* inter = new InterfaceConsole();
    inter->run();
    return 0;
}