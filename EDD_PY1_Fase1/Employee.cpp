#include "Employee.h"
#include <iostream>
#include <string>

Employee::Employee(std::string name, std::string pass, std::string id, std::string job){
	this->name = name;
	this->pass = pass;
	this->id = id;
	this->job = job;
	this->next = nullptr;
}