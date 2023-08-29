#include "Employee.h"

#ifndef EMPLOYEES_H
#define EMPLOYEES_H

class Employees {
public:
    
    Employees();
    void addEmployee(Employee *newEmployee);
    void showCurrentEmployees();
    int cant;

private:
    Employee *first;
};

#endif