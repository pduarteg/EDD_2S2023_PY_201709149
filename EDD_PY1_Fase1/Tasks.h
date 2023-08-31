#include "Task.h"

#ifndef TASKS_H
#define TASKS_H

using namespace std;

class Tasks {
public:
    
    Task *first;
    int cant;
    
    void addTask(Task *newTask);
    void showCurrentTasks();
};

#endif