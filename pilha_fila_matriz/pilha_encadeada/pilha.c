#include "pilha.h"


pilha *createPilha(){
    pilha *p = (pilha*)malloc(sizeof(pilha));
    p->topo = NULL;
    return p;
}

void push(pilha *p, int v){
    node *n = (node*)malloc(sizeof(node));
    n->v = v;
    n->prox = p->topo;
    p->topo = n;
}

int pop(pilha *p){
    node *aux;
    int ret;
    if(p->topo!=NULL){
        aux = p->topo;
        ret = aux->v;
        p->topo = p->topo->prox;
        free(aux);
    }
    return ret;
}

void resetPilha(pilha *p){
    node *q, *t;
    q = p->topo;
    while(q!=NULL){
        t = q;
        q = q->prox;
        free(t);
    }
    p->topo = NULL;
}

void printPilha(pilha *p){
    node *n = p->topo;
    printf("[");
    while(n!=NULL){
        printf("%d ", n->v);
        n = n->prox;
    }
    printf("]\n");
}