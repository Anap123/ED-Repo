#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *before;
};

typedef struct node node;

typedef struct{
    node *begin;
    node *end;
}listD;

listD *createlistD();

void printLd(listD *l);

void insereIni(listD *l, int v);

void insereFim(listD *l, int v);

int hasElement(listD *l, int v);

int removeElement(listD *l, int v);