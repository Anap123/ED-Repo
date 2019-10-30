#include <stdio.h>
#include <stdlib.h>

struct node{
    int v;
    struct node *next;
};
typedef struct node node;

typedef struct{
    struct node *begin;
}list;

list *createList();

void add(list *l, int v);

int isEmpaty(list *l);

void printList(list *l);

void removeBack(list *l);

int size(list *l);