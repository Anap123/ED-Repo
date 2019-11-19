#include "fila.c"
#include <stdio.h>
#include <stdlib.h>

void main(){
    fila *f = createFila();
    insere(f, 12);
    insere(f, 1);
    insere(f, 2);
    insere(f, 4213);
    insere(f, 90);
    printFila(f);
    int ret;
    removeFila(f, &ret);
    printf("Valor retirado: %d\n", ret);
    printFila(f);
}