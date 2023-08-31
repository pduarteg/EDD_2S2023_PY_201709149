#include "Proyect.h"
#include "Task.h"
#include "Tasks.h"

#include <iostream>

using namespace std;

Proyect::Proyect(std::string name, char priority, std::string pid){
	this->name = name;
	this->priority = priority;
	this->pid = pid;
	this->next = NULL;

	if(priority == 'A'){
		cout << "Se asignó la prioridad 1 (A)." << endl;
		this->pLevel = 1;
	} else if(priority == 'B'){
		cout << "Se asignó la prioridad 2 (B)." << endl;
		this->pLevel = 2;
	} else if(priority == 'C'){
		cout << "Se asignó la prioridad 3 (C)." << endl;
		this->pLevel = 3;
	}
}

void Proyect::addProjectTask(string name){
	if(this->tasksList == NULL){
		this->tasksList = new Tasks();
	}

	this->tasksList->addTask(new Task(name));
}