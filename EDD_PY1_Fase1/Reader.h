#include "Employee.h"
#include "Employees.h"
#include "Proyects.h"
#include "Proyect.h"

#ifndef READER_H
#define READER_H

class Reader {
public:
    
    Reader();
    ~Reader();
    void addEmployeesM();
    void addEmployeesF();

    void createProyect();
    void createTasks();
    void assignTasks();

    void showCurrentEmployees();
    void showCurrentProjects();

    Employees *PMList;
    Employees *FDList;
    Employees *BDList;
    Employees *QAList;
    Proyects *pList;
};

#endif