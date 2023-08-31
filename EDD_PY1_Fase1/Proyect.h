#ifndef PROYECT_H
#define PROYECT_H
#include <iostream>

class Proyect {
public:
    Proyect(std::string name, char priority, std::string pid);
    std::string name;
    char priority;
    int pLevel;
    std::string pid;
    Proyect *next;
};

#endif