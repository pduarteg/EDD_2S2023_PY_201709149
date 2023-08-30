#include "Reader.h"
#include "Employees.h"
#include "Employee.h"
#include "Proyect.h"
#include "Proyects.h"

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

Reader::Reader(){
	this->PMList = new Employees();
	this->FDList = new Employees();
	this->BDList = new Employees();
	this->QAList = new Employees();
	this->pList = new Proyects();

	Employee *initial = new Employee("P Duarte", "pmPass0123", "PM-201709149", "Project Manager");
	this->PMList->addEmployee(initial);
}

Reader::~Reader(){
	this->PMList = NULL;
	this->FDList = NULL;
	this->BDList = NULL;
	this->QAList = NULL;
	this->pList = NULL;
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
			} catch(const std::exception& e){
				std::cout << " [!] Se ha producido un error, intente de nuevo." << std::endl;
				optionJ = 0;
				continue;
			}

			if(optionJ == 1){
				job = "Frontend Developer";
				id = "FDEV-";

				int num = this->FDList->cant + 1;

				if(num < 10){
					id += "00" + std::to_string(num);
				} else if(num < 100){
					id += "0" + std::to_string(num);
				} else {
					id += std::to_string(num);
				}

				// Agregando el usuario creado
				Employee *newEmployee = new Employee(name, pass, id, job);
				this->FDList->addEmployee(newEmployee);
			}
			else if(optionJ == 2){
				job = "Backend Developer";
				id = "BDEV-";

				int num = this->BDList->cant + 1;

				if(num < 10){
					id += "00" + std::to_string(num);
				} else if(num < 100){
					id += "0" + std::to_string(num);
				} else {
					id += std::to_string(num);
				}

				// Agregando el usuario creado
				Employee *newEmployee = new Employee(name, pass, id, job);
				this->BDList->addEmployee(newEmployee);
			}
			else if(optionJ == 3){
				job = "Quality Assurance";
				id = "QA-";

				int num = this->QAList->cant + 1;

				if(num < 10){
					id += "00" + std::to_string(num);
				} else if(num < 100){
					id += "0" + std::to_string(num);
				} else {
					id += std::to_string(num);
				}

				// Agregando el usuario creado
				Employee *newEmployee = new Employee(name, pass, id, job);
				this->QAList->addEmployee(newEmployee);
			}
			else if(optionJ == 4){
				job = "Frontend Developer";
				id = "PM-";

				int num = this->PMList->cant + 1;

				if(num < 10){
					id += "00" + std::to_string(num);
				} else if(num < 100){
					id += "0" + std::to_string(num);
				} else {
					id += std::to_string(num);
				}

				// Agregando el usuario creado
				Employee *newEmployee = new Employee(name, pass, id, job);
				this->PMList->addEmployee(newEmployee);
			}

			std::cout << "" << std::endl;
			break;
		}

		
		std::cout << " *** Usuario agregado exitosamente." << std::endl;
		std::cout << " ID generado: " << id << std::endl;
		//
		std::cout << "" << std::endl;
		std::cout << " * ¿Desea agregar otro empleados?" << std::endl;
		std::cout << " * Escriba 1 (SI), 0 (NO)." << std::endl;
		std::cout << "" << std::endl;
		std::cin >> optionW;

		if(optionW == 0){
			break;
		}
	}
	
	std::cout << "" << std::endl;
}

// Carga de empleados por archivo .csv
void Reader::addEmployeesF(){

	std:string fileName;
	
    std::cout << " *** Ingrese el nombre del archivo: " << std::endl;
    std::cout << " [!] Los archivos deben encontrarse en la carpeta \"Archivos de entrada\" " << std::endl;
    std::cout << "" << std::endl;
    std::string ruta;
    std::cin >> fileName;

    std::cout << "" << std::endl;

    ruta = "../Archivos de entrada/";
    ruta += fileName;
    std::cerr << "Ruta ingresada: " << ruta << std::endl;
 	std::ifstream readedFile(ruta);

 	if (!readedFile) {
        std::cerr << "No se pudo abrir el archivo." << std::endl;        
    } else {
    	std::string line;
	    while (std::getline(readedFile, line)) {
	    	// Extracción de datos del empleado
	        std::cout << line << std::endl;

	        std::string id, name, pass, job;
	        stringstream line_inputs(line);

	        getline(line_inputs, id, ',');
	        getline(line_inputs, name, ',');
	        getline(line_inputs, pass, ',');
	        getline(line_inputs, job, ',');

			// cout << "Nombre: " << name << endl;
			// cout << "Id: " << id << endl;
			// cout << "Pass: " << pass << endl;
			// cout << "Puesto: ->" << job << "<-fin" << endl;

			Employee *newEmp = new Employee(name, pass, id, job);

			if(job.std::string::compare("Frontend Developer") == 0){
				this->FDList->addEmployee(newEmp);
			} else if(job.std::string::compare("Backend Developer") == 0){
				this->BDList->addEmployee(newEmp);
			} else if(job.std::string::compare("Quality Assurance") == 0){
				this->QAList->addEmployee(newEmp);
			} else if(job.std::string::compare("Project Manager") == 0){
				this->PMList->addEmployee(newEmp);
			} else {
				std::cout << "" << std::endl;
				std::cout << " [!] Empleo no reconocido." << std::endl;
				std::cout << "" << std::endl;
			}

			std::cout << " *** Usuario agregado exitosamente." << std::endl;
			std::cout << " *** ID: " << id << std::endl;

			std::cout << "" << std::endl;
	    }

	    readedFile.close();
    }

    std::cout << "" << std::endl;
}

void Reader::createProyect(){
	std::cout << "" << std::endl;
	std::cout << " ****************************************************************************" << std::endl;
    std::cout << " *                         Creación de proyectos                            *" << std::endl;
    std::cout << " ****************************************************************************" << std::endl;
	std::cout << "" << std::endl;

	while(true){
		int num = this->pList->cant + 1;

		if(num > 999){
			std::cout << "" << std::endl;
			std::cout << " [!] Se ha excedido la cantidad de proyectos." << std::endl;
			std::cout << "" << std::endl;
			break;
		} else {
			std::string name;
			std::string priority;
			std::string id = "PY-";

			std::cout << " *** Escriba el nombre:" << std::endl;
			std::cin >> name;
			std::cout << "" << std::endl;
			int optionJ;
			std::string optionJS;	
			optionJ = 0;

			while(true){

				optionJS = "";
				optionJ = 0;			

				std::cout << " *** Elija el tipo de prioridad:" << std::endl;
				std::cout << "" << std::endl;
				std::cout << " [1] Tipo A: prioridad máxima." << std::endl;
				std::cout << " [2] Tipo B: prioridad normal." << std::endl;
				std::cout << " [3] Tipo C: prioridad básica." << std::endl;

				std::cin >> optionJS;

				try{			
					optionJ = std::stoi(optionJS);
				} catch(const std::exception& e){
					std::cout << " [!] Se ha producido un error, intente de nuevo." << std::endl;
					optionJ = 0;
					continue;
				}

				if(optionJ == 1)
					priority = "A";
				else if(optionJ == 2)
					priority = "B";
				else if(optionJ == 3)
					priority = "C";
				else{
					continue;
				}

				break;
			}

			if(num < 10){
				id += "10" + std::to_string(num);
			} else if(num < 100){
				id += "1" + std::to_string(num);
			} else {
				id += std::to_string(num);
			}

			Proyect *newP = new Proyect(name, priority, id);
			this->pList->addProyect(newP);

			std::cout << "" << std::endl;
			std::cout << " *** Proyecto creado extosamente." << std::endl;
			std::cout << " *** ID: " << id << std::endl;
			std::cout << "" << std::endl;

			optionJ = 0;
			optionJS = "";
			std::cout << " * ¿Desea agregar otro proyecto?" << std::endl;
			std::cout << " * Escriba 1 (SI), 0 (NO)." << std::endl;
			std::cout << "" << std::endl;
			std::cin >> optionJS;

			try{			
				optionJ = std::stoi(optionJS);
			} catch(const std::exception& e){
				std::cout << "" << std::endl;
				break;
			}

			if(optionJ != 1){
				break;
			}
		} // END ELSE
	} // END WHILE 1
}

void Reader::showCurrentEmployees(){

	int cant = this->PMList->cant;

	if(cant > 0){
		std::cout << "" << std::endl;
		std::cout << "**************************************************" << std::endl;
		std::cout << "            Empleados: PROJECT MANAGER            " << std::endl;
		std::cout << "            Cantidad: " << cant << std::endl;
		std::cout << "**************************************************" << std::endl;
		std::cout << "" << std::endl;
		this->PMList->showCurrentEmployees();
		std::cout << "" << std::endl;
	}

	cant = this->FDList->cant;

	if(cant > 0){
		std::cout << "" << std::endl;
		std::cout << "**************************************************" << std::endl;
		std::cout << "           EMPLEADOS: FRONTEND DEVELOPER" << std::endl;
		std::cout << "           Cantidad: " << cant << std::endl;
		std::cout << "**************************************************" << std::endl;
		std::cout << "" << std::endl;
		this->FDList->showCurrentEmployees();
		std::cout << "" << std::endl;
	}

	cant = this->BDList->cant;

	if(cant > 0){
		std::cout << "" << std::endl;
		std::cout << "**************************************************" << std::endl;
		std::cout << "           EMPLEADOS: BACKEND DEVELOPER" << std::endl;
		std::cout << "           Cantidad: " << cant << std::endl;
		std::cout << "**************************************************" << std::endl;
		std::cout << "" << std::endl;
		this->BDList->showCurrentEmployees();
		std::cout << "" << std::endl;
	}

	cant = this->QAList->cant;	

	if(cant > 0){
		std::cout << "" << std::endl;
		std::cout << "**************************************************" << std::endl;
		std::cout << "            EMPLEADOS: QUALITY ASSURANCE" << std::endl;
		std::cout << "            Cantidad: " << cant << std::endl;
		std::cout << "**************************************************" << std::endl;
		std::cout << "" << std::endl;
		this->QAList->showCurrentEmployees();
		std::cout << "" << std::endl;
	}
}