#include "InterfaceConsole.h"
#include "InterfaceGraphique.h"

int main(int argc, char* argv[])
{
    Interface* inter = new InterfaceConsole();
    //Interface* inter2 = new InterfaceGraphique();
    inter->run();
    return 0;
}

