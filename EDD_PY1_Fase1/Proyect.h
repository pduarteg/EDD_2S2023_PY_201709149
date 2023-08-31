#ifndef PROYECT_H
#define PROYECT_H

#include <iostream>
#include "Tasks.h"

class Proyect {
public:

    std::string name;
    char priority;
    int pLevel;
    std::string pid;
    Proyect *next;
    Tasks *tasksList;

    Proyect(std::string name, char priority, std::string pid);
    void addProjectTask(string name);
};

#endif