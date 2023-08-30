#ifndef PROYECT_H
#define PROYECT_H
#include <iostream>

class Proyect {
public:
    Proyect(std::string name, std::string priority, std::string pid);
    std::string name;
    std::string priority;
    std::string pid;

    Proyect *next;
};

#endif