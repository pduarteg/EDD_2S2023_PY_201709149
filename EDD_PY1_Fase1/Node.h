#ifndef NODE_H
#define NODE_H
#include <iostream>

class Node {
public:

    Node(std::string emp, std::string proy, std::string interc);

    std::string emp;
    std::string proy;
    std::string interc; // intersección de proyecto y empleado
    Node *up;
    Node *down;
    Node *left;
    Node *right;
};

#endif