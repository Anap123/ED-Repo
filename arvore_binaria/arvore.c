#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

node *criaArvore(int v){
    node *root = (node*)malloc(sizeof(node));
    root->esq = root->dir = NULL;
    root->v = v;
    return root;
}

void insertValue(node *root, int val){
    node *n = (node*)malloc(sizeof(node));
    n->v = val;
    n->dir = n->esq = NULL;
    
    node *p = root;
    while(p!=NULL){
        if(p->dir == NULL && val > p->v)
            p->dir = n;
        else if(p->esq == NULL && val < p->v)
            p->esq = n;
        else if(val > p->v) p = p->dir;
        else p = p->esq;
    }
}


void printTree(node *p){
    if(p!= NULL){
        printf("%d ",p->v);
        printTree(p->esq);
        printTree(p->dir);
    }
}

node *findValue(node *p, int val){
    if(p == NULL || p->v == val){
        return p;
    }
    else {
        node *t = findValue(p->esq, val);
        if(t!=NULL) return t;
        else return findValue(p->dir, val);
    }
}

int getHeight(node *p){
    if(p == NULL) return -1;
    else{
        int ae = getHeight(p->esq);
        int ad = getHeight(p->dir);
        return (ae>ad ? 1+ae: 1+ad);
    }
}

node *removeValue(int val, node *root){
    if(root == NULL) return NULL;
    else if(val > root->v) root->dir = removeValue(val, root->dir);
    else if(val < root->v) root->esq = removeValue(val, root->esq);
    else{
        if(root->esq == NULL && root->dir == NULL){
            free(root);
            return NULL;
        }
        else if(root->dir == NULL){
            node *t = root;
            root = root->esq;
            free(t); 
        } 
        else if(root->esq == NULL){
            node *t = root;
            root = root->esq;
            free(t);
        }
        else{
            node *f = root->esq;
            while(f->dir!=NULL) f = f->dir;
            root->v = f->v;
            f->v = val;
            root->esq = removeValue(val, root->esq);
        }
    }
    return root;
}

int size(node *root){
    if(root!=NULL) return 1 + size(root->esq) + size(root->dir);
}


int sumX(node *root, int x){
    if(root!=NULL){
        if(root->v > x) return root->v + sumX(root->esq, x) + sumX(root->dir, x);
        else return sumX(root->esq, x) + sumX(root->dir, x);
    }
}