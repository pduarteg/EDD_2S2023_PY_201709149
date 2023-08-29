#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee {

public:

    Employee *next;
	Employee(std::string name, std::string pass, std::string id, std::string job);	
	std::string name;
	std::string pass;
	std::string id;
	std::string job;

private:
    

};

#endif