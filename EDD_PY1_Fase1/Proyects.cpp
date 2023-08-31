#include "Proyects.h"
#include "Proyect.h"

#include <iostream>

using namespace std;

Proyects::Proyects(){
	this->first = NULL;
	this->cant = 0;
}

void Proyects::addProyect(Proyect *newProyect){
	if(this->first == NULL){
		this->first = newProyect;		
	} else if(this->cant == 1){
		int newLevel = newProyect->pLevel;
		int extLevel = this->first->pLevel;

		Proyect *temp = this->first;

		if(newLevel < extLevel){
			newProyect->next = temp;
			this->first = newProyect;
		} else if(newLevel >= extLevel) {
			this->first->next = newProyect;
		}
	} else {
		int newLevel = newProyect->pLevel;
		int extLevel;
		Proyect *temp = this->first;
		Proyect *aux = NULL;

		while(temp != NULL){
			extLevel = temp->pLevel;
			if(extLevel <= newLevel){
				aux = temp;
				temp = temp->next;
			} else {
				break;
			}
		}

		if(aux == NULL){
			newProyect->next = temp;
			this->first = newProyect;
		} else {
			aux->next = newProyect;
			newProyect->next = temp;
		}
	}

	this->cant += 1;
}

void Proyects::showCurrentProjects(){
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

Proyect* Proyects::searchByID(string pid){
	Proyect *temp = this->first;

	while(temp != NULL){
		if(pid.string::compare(temp->pid) == 0){
			//cout << "FOUND" << endl;
			break;
		} else {
			temp = temp->next;
		}
	}

	return temp;
}