#include "Node.h"

Node::Node(std::string emp, std::string proy, std::string interc){
	this->emp = emp;
	this->proy = proy;
	this->interc = interc;

	this->up = NULL;
    this->down = NULL;
    this->left = NULL;
    this->right = NULL;
}