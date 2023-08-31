#include "Tasks.h"
#include "Task.h"

#include <iostream>

using namespace std;

void Tasks::addTask(Task *newTask){
	if(this->first == NULL){
		newTask->prev = NULL;
		newTask->next = NULL;
		this->first = newTask;
	} else {
		Task *t = this->first;

		while(t->next != NULL){
			t = t->next;
		}

		newTask->prev = t;
		t->next = newTask;
	}

	this->cant += 1;
}

void Tasks::showCurrentTasks(){
	Task *temp = this->first;

	std::cout << "   -------------------------------------" << std::endl;
	while(temp != nullptr){
		std::cout << "   Nombre: " << temp->name << std::endl;
		temp = temp->next;
	}
	std::cout << "   -------------------------------------" << std::endl;
}