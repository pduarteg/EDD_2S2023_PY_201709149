#include "Proyect.h"

#ifndef PROYECTS_H
#define PROYECTS_H

using namespace std;

class Proyects {
public:
    
    Proyects();
    void addProyect(Proyect *newProyect);
    void showCurrentProjects();    
    int cant;
    Proyect *first;
    Proyect* searchByID(string pid);
};

#endif