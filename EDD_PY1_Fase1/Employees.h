#include "Employee.h"

#ifndef EMPLOYEES_H
#define EMPLOYEES_H

class Employees {
public:
    
    void addEmployee(Employee *newEmployee);
    void showCurrentEmployees();
    int cant = 0;
    Employee *first;
};

#endif