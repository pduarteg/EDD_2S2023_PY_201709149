#ifndef MATRIX_H
#define MATRIX_H

#include "Node.h"

using namespace std;

class Matrix {
public:
    // constructor
    Matrix();

    // create node
    Node *createNode(int row, int col, int val);

private:
    Node *head;
    Node *createProyectHead(std::string pid);
    Node *createEmployHead(std::string eid);
};

#endif