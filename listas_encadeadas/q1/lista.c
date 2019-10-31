#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

list *createList()
{
    list *l = (list *)(malloc(sizeof(list)));
    l->begin = NULL;
    return l;
}

void add(list *l, int v)
{
    node *n = (node *)(malloc(sizeof(node)));
    n->v = v;
    n->next = NULL;
    node *p = l->begin;
    node *a = NULL;
    while (p != NULL)
    {
        a = p;
        p = p->next;
    }
    if (a == NULL)
        l->begin = n;
    else
    {
        a->next = n;
        free(p);
    }
}

void printList(list *l)
{
    printf("[");
    node *p = l->begin;
    while (p != NULL)
    {
        if (p->next != NULL)
            printf("%d, ", p->v);
        else
            printf("%d", p->v);
        p = p->next;
    }
    printf("]\n");
}

int isEmpaty(list *l)
{
    return (1 ? l->begin == NULL : 0);
}

void removeBack(list *l)
{
    node *p = l->begin;
    node *a = NULL;
    while (p != NULL && p->next != NULL)
    {
        a = p;
        p = p->next;
    }
    if (a == NULL)
        l->begin = NULL;
    else
        a->next = NULL;
    free(p);
}

int size(list *l)
{
    int c = 0;
    node *p = l->begin;
    while (p != NULL)
    {
        c++;
        p = p->next;
    }
    return c;
}