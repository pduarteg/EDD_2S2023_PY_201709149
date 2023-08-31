#include <stdio.h>
#include <stdlib.h>

#include "Matrix.h"
#include "Node.h"
#include <string>

using namespace std;

Matrix::Matrix(){
    head = new Node(0, 0, NULL, NULL, NULL);
}

void *Matrix::createProyectHead(string pid){
    Node *temp = head;

    while(temp->right != NULL){
        temp = temp->right;
    }

    pCant += 1;
    temp->right = new Node(pCant, 0,NULL, pid, NULL);
}

void *Matrix::createEmployHead(string eid){
    Node *temp = head;

    while(temp->down != NULL){
        temp = temp->down;
    }

    eCant +=1;
    temp->down = new Node(0, eCant, eid, NULL, NULL);
}

void Matrix::createNode(string pid, string eid, Node *newNode){
    Node *temp = head;
    Node *yNode;
    Node *xNode;

    temp = temp->right;
    while(temp->right != NULL){
        if(pid.std::string::compare(temp->proy) == 0){
            xNode = temp;
            break;
        } else {
            temp = temp->right;
        }
    }

    temp = head->down;
    while(temp->down != NULL){
        if(pid.std::string::compare(temp->emp) == 0){
            yNode = temp;
            break;
        } else {
            temp = temp->down;
        }
    }

    // Incersión vertical
    Node *aux = NULL;
    while(yNode != NULL){
        aux = yNode;
        int y = yNode->y;
        if(y > newNode->y){
            break;
        }
        yNode = yNode->down;
    }

    if(aux != NULL){
        if(yNode == NULL){
            aux->down = newNode;
        } else {
            aux->down = newNode;
            newNode->down = yNode;
        }
    } else {
        yNode->down = newNode;
    }
    
    // Incersión horizontal
    aux = NULL;
    while(xNode != NULL){
        aux = xNode;
        int x = xNode->x;
        if(x > newNode->x){
            break;
        }
        xNode = xNode->right;
    }

    if(aux != NULL){
        if(xNode == NULL){
            aux->right = newNode;
        } else {
            aux->right = newNode;
            newNode->right = xNode;
        }
    } else {
        xNode->right = newNode;
    }
}

int getHeadPCoordinate(string pid){
    cout << "pendiente" << endl;
}
int getHeadECoordinate(string eid){
    cout << "pendiente" << endl;
}
