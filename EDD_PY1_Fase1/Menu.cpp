#include "Menu.h"
#include "Reader.h"
#include "Writer.h"

#include <iostream>

Menu::Menu() {
    this->readerObj = new Reader();
    this->writerObj = new Writer();
}

void Menu::showMenu() {

    std::string logedUser = readerObj->PMList->first->id;
    std::string optionS;
    int optionInt;
    std::cout << "" << std::endl;
    std::cout << " ****************************************************************************" << std::endl;
    std::cout << "                     ESTRUCTURA DE DATOS - PROYECTO FASE 1" << std::endl;
    std::cout << "                     BIENVENIDO: " << logedUser << std::endl;
    std::cout << " ****************************************************************************" << std::endl;
    std::cout << "" << std::endl;

    while(true){

        std::cout << "" << std::endl;
        std::cout << " ****************************************************************************" << std::endl;
        std::cout << " *                              MENU PRINCIPAL                             *" << std::endl;
        std::cout << " ****************************************************************************" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "  [1] Cargar empleados." << std::endl;
        std::cout << "  [2] Crear proyecto." << std::endl;
        std::cout << "  [3] Crear tareas." << std::endl;
        std::cout << "  [4] Asignar tareas." << std::endl;
        std::cout << "  [5] Graficar cola de proyectos." << std::endl;
        std::cout << "  [6] Salir." << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Escriba el número de acuerdo a la opción que desee: " << std::endl;

        // Recupera el número en consola
        std::cin >> optionS;
        std::cout << "" << std::endl;

        try{            
            optionInt = std::stoi(optionS);
        } catch(const std::exception& e){
            std::cout << "" << std::endl;
            std::cout << " [!] Se ha producido un error, intente de nuevo." << std::endl;
            std::cout << "" << std::endl;
            optionInt = 0;
            continue;
        }
        
        if(optionInt == 1){
            showSubMenu1();
        } else if(optionInt == 2){
            this->readerObj->createProyect();
        } else if(optionInt == 3){
            this->readerObj->createTasks();
        } else if(optionInt == 4){
            this->readerObj->assignTasks();
        } else if(optionInt == 5){
            this->writerObj->graphQueue(this->readerObj->pList);
        } else if(optionInt == 6){
            break;
        } else if(optionInt == 0){
            this->readerObj->showCurrentEmployees();
            this->readerObj->showCurrentProjects();
        } else {
            std::cout << "Opción no válida." << std::endl;
        }

        std::cout << "" << std::endl;
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

    std::string optionSub1S;
    int optionSub1;

    std::cout << "Escriba el número de acuerdo a la opción que desee: " << std::endl;
    std::cout << "" << std::endl;

    std::cin >> optionSub1S;

    try{            
        optionSub1 = std::stoi(optionSub1S);
    } catch(const std::exception& e){
        std::cout << "" << std::endl;
        std::cout << " [!] Se ha producido un error, intente de nuevo." << std::endl;
        std::cout << "" << std::endl;
        optionSub1 = 0;
    }

    if(optionSub1 == 1){
        std::cout << "" << std::endl;
        this->readerObj->addEmployeesM();
        std::cout << " *** Carga finalizada. " << std::endl;
    } else if(optionSub1 == 2){
        std::cout << "" << std::endl;
        this->readerObj->addEmployeesF();
        std::cout << " *** Carga finalizada. " << std::endl;
    } else{
        std::cout << "Opción no válida." << std::endl;
    }
    std::cout << "" << std::endl;
}