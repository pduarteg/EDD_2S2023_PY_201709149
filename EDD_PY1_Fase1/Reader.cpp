#include "Reader.h"
#include "Employees.h"
#include "Employee.h"

#include <iostream>
#include <string>

Reader::Reader(){
	this->empList = new Employees();
}

void Reader::addEmployeesM(){
	std::cout << "" << std::endl;
	std::cout << " ****************************************************************************" << std::endl;
    std::cout << " *                      Ingreso manual de empleados                         *" << std::endl;
    std::cout << " ****************************************************************************" << std::endl;
	std::cout << "" << std::endl;
	while(true){
		std::string name;
		std::string pass;
		std::string job;
		std::string id;

		int optionW; // Writer menu
		int optionJ; // Job

		std::cout << " *** Escriba el nombre:" << std::endl;
		std::cin >> name;

		std::cout << " *** Escriba la contraseña:" << std::endl;
		std::cin >> pass;
		std::cout << "" << std::endl;

		// Asignación de puestos:

		while(true){

			std::string optionJS;

			std::cout << " *** Seleccione el puesto:" << std::endl;
			std::cout << "" << std::endl;
			std::cout << " [1] Frontend Developer (FDEV)." << std::endl;
			std::cout << " [2] Backend Developer (BDEV)." << std::endl;
			std::cout << " [3] Quality Assurance (QA)." << std::endl;
			std::cout << " [4] Project Manager (PM)." << std::endl;

			std::cin >> optionJS;

			try{			
				optionJ = std::stoi(optionJS);

				if(optionJ == 1){
					job = "Frontend Developer";
					id = "FDEV-";
				}
				else if(optionJ == 2){
					job = "Backend Developer";
					id = "BDEV-";
				}
				else if(optionJ == 3){
					job = "Quality Assurance";
					id = "QA-";
				}
				else if(optionJ == 4){
					job = "Frontend Developer";
					id = "PM-";
				}
			} catch(const std::exception& e){
				std::cout << " [!] Se ha producido un error, intente de nuevo." << std::endl;
				optionJ = 0;
				continue;
			}

			if((this->empList->cant + 1) < 10){
				id += "00" + std::to_string(this->empList->cant+1);
			} else if((this->empList->cant + 1) < 100){
				id += "0" + std::to_string(this->empList->cant+1);
			} else {
				id += std::to_string(this->empList->cant+1);
			}

			std::cout << "" << std::endl;
			break;
		}
		
		std::cout << " ¿TODO BIEN? " << std::endl;

		// Agregando el usuario creado
		Employee *newEmployee = new Employee(name, pass, id, job);
		this->empList->addEmployee(newEmployee);
		std::cout << " *** Usuario agregado exitosamente." << std::endl;
		std::cout << " ID generado: " << id << std::endl;
		//
		std::cout << "" << std::endl;
		std::cout << " * ¿Desea agregar más empleados?" << std::endl;
		std::cout << " * Escriba 1 (Sí) 0 (No)." << std::endl;
		std::cout << "" << std::endl;
		std::cin >> optionW;

		if(optionW == 0){
			break;
		}
	}
	
	std::cout << "" << std::endl;
}