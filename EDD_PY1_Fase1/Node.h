#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node {
public:

    Node(int x, int y, std::string emp, std::string proy, std::string interc);

    std::string emp; // ID del empleado
    std::string proy; // ID del proyecto
    std::string interc; // intersección de proyecto y empleado

    int x;
    int y;
    Node *up;
    Node *down;
    Node *left;
    Node *right;
};

#endif