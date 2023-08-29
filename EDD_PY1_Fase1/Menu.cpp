#include "Menu.h"
#include "Reader.h"

#include <iostream>

Menu::Menu() {
    this->readerObj = new Reader();
}

void Menu::showMenu() {

    int option;
    int n = 0;

    while(true){
        n += 1;

        std::cout << " ****************************************************************************" << std::endl;
        std::cout << " *                              MENÚ PRINCIPAL                             *" << std::endl;
        std::cout << " ****************************************************************************" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "  [1] Cargar empleados." << std::endl;
        std::cout << "  [2] Crear proyecto." << std::endl;
        std::cout << "  [3] Crear tareas." << std::endl;
        std::cout << "  [4] Asignar tareas." << std::endl;
        std::cout << "  [5] Salir." << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Escriba el número de acuerdo a la opción que desee: " << std::endl;

        // Recupera el número en consola
        std::cin >> option;
        std::cout << "La opción elegida fue: " << option << std::endl;

        if(option == 1){
            showSubMenu1();
        } else if(option == 2){

        } else if(option == 3){

        } else if(option == 4){

        } else if(option == 5){
            break;
        } else if(option == 0){
            this->readerObj->empList->showCurrentEmployees();
        } else {
            std::cout << "Opción no válida." << std::endl;
        }

        if(n == 10){
            break;
        }
    }
    
}

void Menu::showSubMenu1(){
    std::cout << "" << std::endl;
    std::cout << " ****************************************************************************" << std::endl;
    std::cout << " *                             Carga de empleados                           *" << std::endl;
    std::cout << " ****************************************************************************" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "  [1] Carga manual." << std::endl;
    std::cout << "  [2] Carga masiva." << std::endl;
    std::cout << "" << std::endl;

    int optionSub1;

    std::cout << "Escriba el número de acuerdo a la opción que desee: " << std::endl;
    std::cout << "" << std::endl;

    std::cin >> optionSub1;

    if(optionSub1 == 1){
        std::cout << "" << std::endl;
        this->readerObj->addEmployeesM();
        std::cout << " *** Carga finalizada. " << std::endl;
    } else if(optionSub1 == 2){
        std::cout << " CARGA MASIVA" << std::endl;
    } else{
        std::cout << "Opción no válida." << std::endl;
    }
    std::cout << "" << std::endl;
}