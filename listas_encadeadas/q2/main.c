#include<stdio.h>
#include<stdlib.h>
#include "lista.c"

int main()
{
    // Criando a lista
    list *l = createList();
    // Adicionando os elementos
    add(l, 2);
    add(l, 112);
    add(l, 4);
    add(l, 6);
    add(l, 7);
    add(l, 1);

    printList(l);
    int v, hasV;
    printf("Procure um elemento na lista: ");
    scanf("%d", &v);
    hasV = hasElement(l, v);
    if(hasV >= 0) printf("O elemento %d está na posição %d\n", v, hasV);
    else printf("O elemento %d não está na lista!\n", v);
    printf("Adicionando 30 na posição 2:\n");
    insertPosition(l, 30, 2);
    printList(l);

    printf("Removendo o item da posição 2:\n");
    removePos(l, 2);
    printList(l);

    printf("Removendo o elemento 7:\n");
    removeElement(l, 7);
    printList(l);
    return 0;
}
