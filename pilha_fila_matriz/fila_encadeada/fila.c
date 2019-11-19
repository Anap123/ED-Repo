#include "fila.h"
#include <stdlib.h>
#include <stdio.h>

fila *createFila(){
    fila *f = (fila*)malloc(sizeof(fila));
    f->fim = f->ini = NULL;
    return f;
}

void insere(fila *f, int v){
    node *n = (node*)malloc(sizeof(node));
    n->v = v;
    n->prox = NULL;
    if(f->fim != NULL){
        f->fim->prox = n;
        f->fim = n;
    }
    else f->ini = f->fim = n;
}

int removeFila(fila *f, int *ret){
    node *temp;
    if(f->ini == NULL) return -1;
    else{
        temp = f->ini;
        *ret = temp->v;
        f->ini = f->ini->prox;
        if(f->ini == NULL) f->fim = NULL;
        free(temp);
        return 0;
    }
}

void clearFila(fila *f){
    node *tmp = f->ini;
    node *tmp2;

    while(tmp != NULL){
        tmp2 = tmp;
        tmp = tmp->prox;
        free(tmp2);
    }
    f->ini = f->fim = NULL;
}

void printFila(fila *f){
    node *tmp = f->ini;
    printf("[");
    if(tmp!=NULL){
        do{
            printf("%d ", tmp->v);
            tmp = tmp->prox;
        }while(tmp!=f->fim);
    }
    printf("]\n");
}