#include "pilha.c"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pilha *p = createPilha();
    push(p, 1);
    push(p, 3);
    push(p, 6);
    printPilha(p);
    int ret = pop(p);
    printf("Valor removido: %d\n", ret);
    printPilha(p);
    return 0;
}