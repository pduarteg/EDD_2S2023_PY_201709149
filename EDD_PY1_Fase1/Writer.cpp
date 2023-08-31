#include "Writer.h"
#include "Proyects.h"
#include "Proyect.h"

#include <iostream>
using namespace std;

void Writer::graphQueue(Proyects *p){
	FILE *fp;

    Proyect *t = p->first;

    int n = 0;
    int cant = p->cant;
    
    string labelText;

    fp = fopen("graphviz.dot", "w+");

    fprintf(fp, "digraph G {\n");
    fprintf(fp, "   layout=dot\n");
    fprintf(fp, "   rankdir=LR\n");
    fprintf(fp, "   label = \"EDD - Proyecto 1 - Cola de Prioridad\"\n");
    fprintf(fp, "   node [shape=box color=deeppink3 style=filled fillcolor=salmon]\n");
    fprintf(fp, "\n");

    while(t != nullptr){
        labelText = t->pid + "\\n" + "Prioridad: " + t->priority;
    	//fprintf(fp, "  nodo" + to_string(n) + " [label=\"" + labelText + "\"]\n");
        fprintf(fp, "   nodo%s [label=\"%s\"]\n", to_string(n).c_str(), labelText.c_str());
        t = t->next;
        n += 1;
    }

    fprintf(fp, "   nodo%s [label=\"NULL\"]\n", to_string(n).c_str());
    
    fprintf(fp, "\n");

    for(int i = 0; i < cant; i++){        
        fprintf(fp, "   nodo%s -> nodo%s\n", to_string(i).c_str(), to_string(i+1).c_str());
    }

    fprintf(fp, "\n");
    fprintf(fp, "}\n");

    fclose(fp);
    system("dot -Tsvg graphviz.dot -o graphviz.svg");
    system("graphviz.svg");
}