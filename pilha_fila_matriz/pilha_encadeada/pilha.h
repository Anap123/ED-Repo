#include <stdio.h>
#include <stdlib.h>


struct node{
    int v;
    struct node *prox;
};

typedef struct node node;


typedef struct{
    node *topo;
}pilha;

pilha *createPilha();

void push(pilha *p, int v);

int pop(pilha *p);

void resetPilha(pilha *p);

void printPilha(pilha *p);