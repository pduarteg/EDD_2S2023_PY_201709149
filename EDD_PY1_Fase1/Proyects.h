#include "Proyect.h"

#ifndef PROYECTS_H
#define PROYECTS_H

class Proyects {
public:
    
    Proyects();
    void addProyect(Proyect *newProyect);
    void showCurrentProyects();
    int cant;

private:
    Proyect *first;
};

#endif