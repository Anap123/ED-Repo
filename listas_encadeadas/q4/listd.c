#include "listd.h"
#include <stdlib.h>
#include <stdio.h>

listD *createlistD()
{
    listD *l = (listD *)malloc(sizeof(listD));
    l->begin = NULL;
    l->end = l->begin;
    return l;
}

void insereIni(listD *l, int v)
{
    node *n = (node *)malloc(sizeof(node));
    n->data = v;
    n->before = NULL;
    n->next = l->begin;
    l->begin = n;
    if (l->end == NULL)
        l->end = n;
}

void insereFim(listD *l, int v)
{
    node *n = (node*)malloc(sizeof(node));
    n->data = v;
    n->next = NULL;
    n->before = l->end;
    l->end = n;
}

void printLd(listD *l)
{
    printf("[");
    node *p = l->begin;
    node *a = NULL;
    while (p != NULL)
    {
        if (p->next != NULL)
            printf("%d, ", p->data);
        else
            printf("%d", p->data);
        p = p->next;
    }
    printf("]\n");
}
