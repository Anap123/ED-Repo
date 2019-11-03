#include "listd.c"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    listD *l = createlistD();
    insereIni(l, 2);
    insereIni(l, 7);
    insereFim(l, 3);
    insereFim(l, 312);
    insereFim(l, 4);
    insereFim(l, 13);
    printLd(l);

    printf("Buscando 2: %d\n", hasElement(l, 2));
    printf("Buscando 131: %d\n", hasElement(l,131));
    
    printf("Remove 7 na posicao: %d\n", removeElement(l, 7));
    printLd(l);

    printf("Remove 312 na posicao: %d\n", removeElement(l, 312));
    printLd(l);

    printf("Remove 13 na posicao: %d\n", removeElement(l, 13));
    printLd(l);


    return 0;
}