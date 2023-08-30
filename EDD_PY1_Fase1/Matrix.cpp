#include <stdio.h>
#include <stdlib.h>

#include "Matrix.h"
#include "Node.h"
#include <string>

using namespace std;

Matrix::Matrix(){
    head = new Node(NULL, NULL, NULL);
}

Node *Matrix::createProyectHead(std::string pid){
    Node *temp = head;

    while(temp->right != NULL){
        temp = temp->right;
    }

    temp->right = new Node(NULL, pid, NULL);
}

Node *Matrix::createEmployHead(std::string eid){
    Node *temp = head;

    while(temp->down != NULL){
        temp = temp->down;
    }

    temp->down = new Node(NULL, eid, NULL);
}