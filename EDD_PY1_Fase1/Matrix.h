#ifndef MATRIX_H
#define MATRIX_H

#include "Node.h"

using namespace std;

class Matrix {
public:
    // constructor
    Matrix();

    int pCant;
    int eCant;
    int getHeadPCoordinate(string pid);
    int getHeadECoordinate(string eid);

private:
    Node *head;
    void *createProyectHead(string pid);
    void *createEmployHead(string eid);
    void createNode(string pid, string eid, Node *newNode);
};

#endif