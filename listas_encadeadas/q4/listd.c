#include "listd.h"
#include <stdlib.h>
#include <stdio.h>


listD *createlistD(){
    listD *l = (listD*)malloc(sizeof(listD));
    l->begin = NULL;
    l->end = l->begin;
    return l;
}

void insereIni(listD *l, int v){
    node *n = (node*)malloc(sizeof(node));
    n->data = v;
    n->before = NULL;
    n->next = l->begin;
    l->begin = n;
    if
}

void insereFim(listD *l, int v){
    node *n = (node*)malloc(sizeof(node));
    n->data = v;

}