#include "Proyects.h"
#include "Proyect.h"

Proyects::Proyects(){
	this->first = NULL;
	this->cant = 0;
}

void Proyects::addProyect(Proyect *newProyect){
	if(this->first == NULL){
		this->first = newProyect;
		this->cant += 1;
	} else {
		Proyect *temp = this->first;

		while(temp->next != nullptr){
			temp = temp->next;
		}

		temp->next = newProyect;
		this->cant += 1;
	}
}

void Proyects::showCurrentProyects(){
	Proyect *temp = this->first;
	while(temp != nullptr){
		std::cout << "   -------------------------------------" << std::endl;
		std::cout << "   Nombre: " << temp->name << std::endl;
		std::cout << "   Prioridad tipo: " << temp->priority << std::endl;
		std::cout << "   ID: " << temp->pid << std::endl;
		std::cout << "   -------------------------------------" << std::endl;
		std::cout << "" << std::endl;
		temp = temp->next;
	}
}