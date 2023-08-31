#ifndef TASK_H
#define TASK_H

#include <iostream>
using namespace std;

class Task {
public:
    
    Task(string name);
    Task *prev;
    Task *next;
    string name;

};

#endif