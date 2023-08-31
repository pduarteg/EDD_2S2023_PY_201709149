#include "Node.h"

Node::Node(int x, int y, std::string emp, std::string proy, std::string interc){
	this->x = x;
	this->y = y;

	this->emp = emp;
	this->proy = proy;
	this->interc = interc;

	this->up = NULL;
    this->down = NULL;
    this->left = NULL;
    this->right = NULL;
}