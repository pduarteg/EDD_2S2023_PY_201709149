#include "Employees.h"
#include "Employee.h"

#include <iostream>

void Employees::addEmployee(Employee *newEmployee){
	if(this->first == NULL){
		this->first = newEmployee;
		this->cant += 1;
	} else {
		Employee *temp = this->first;

		while(temp->next != nullptr){
			temp = temp->next;
		}

		temp->next = newEmployee;
		this->cant += 1;
	}
}

void Employees::showCurrentEmployees(){
	Employee *temp = this->first;
	while(temp != nullptr){
		std::cout << "   --------------------------------------" << std::endl;
		std::cout << "   Nombre: " << temp->name << std::endl;
		std::cout << "   Contrasenia: " << temp->pass << std::endl;
		std::cout << "   ID: " << temp->id << std::endl;
		std::cout << "   Puesto:" << temp->job << std::endl;
		std::cout << "   --------------------------------------" << std::endl;
		std::cout << "" << std::endl;
		temp = temp->next;
	}
}