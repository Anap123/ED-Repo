#include "listd.c"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    listD *l = createlistD();
    insereIni(l, 2);
    insereFim(l, 3);
    printLd(l);
    return 0;
}