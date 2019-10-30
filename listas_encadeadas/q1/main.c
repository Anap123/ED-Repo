#include <stdio.h>
#include <stdlib.h>
#include "lista.c"

int main()
{
    list *l = createList();
    add(l, 3);
    add(l, 5);
    add(l, 2);
    add(l, 8);
    printList(l);
    printf("Tamanho da lista: %d\n", size(l));
    removeBack(l);

    printList(l);
    printf("Tamanho da lista: %d\n", size(l));
    removeBack(l);
    removeBack(l);
    printList(l);
    if(isEmpaty(l)) printf("A lista está vazia!\n");
    else printf("A lista não esta vazia!\n");
    removeBack(l);
    printList(l);
    if(isEmpaty(l)) printf("A lista está vazia!\n");
    else printf("A lista não esta vazia!\n");
    return 1;
}