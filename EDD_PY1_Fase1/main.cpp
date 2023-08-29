#include <iostream>
#include <locale>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

#include "Menu.h"


int main() {

    setlocale(LC_ALL, "spanish");
    //std::cout << "1. Opción Configuración" << std::endl;    
    Menu mainMenu;
    mainMenu.showMenu();

    return 0;
}


// Para compilar:
// g++ -c clase.cpp -o clase.o
// Luego se unen las clases:
// g++ main.o clase1.o clase2.o . . . -o NombrePrograma