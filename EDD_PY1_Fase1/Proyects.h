#include "Proyect.h"

#ifndef PROYECTS_H
#define PROYECTS_H

class Proyects {
public:
    
    Proyects();
    void addProyect(Proyect *newProyect);
    void showCurrentProjects();
    int cant;
    Proyect *first;
};

#endif