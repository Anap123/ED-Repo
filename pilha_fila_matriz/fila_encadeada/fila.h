#include <stdlib.h>
#include <stdio.h>


struct node{
    int v;
    struct node *prox;
};

typedef struct node node;

typedef struct{
    node *ini;
    node *fim;
}fila;

fila *createFila();

void insere(fila *f, int v);

int removeFila(fila *f, int *ret);

void clearFila(fila *f);

void printFila(fila *f);