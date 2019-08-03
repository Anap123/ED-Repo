#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i, anos;
    long pa, pb;
    double g1, g2, taxaA, taxaB;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%ld %ld %lf %lf", &pa, &pb, &g1, &g2);
        taxaA = 1 + (g1 / 100);
        taxaB = 1 + (g2 / 100);
        anos = 1;
        pa = (long)(pa * taxaA);
        pb = (long)(pb * taxaB);
        while (pa <= pb)
        {
            anos++;
            pa = (long)(pa * taxaA);
            pb = (long)(pb * taxaB);
            if (anos > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (anos <= 100)
        {
            printf("%d anos.\n", anos);
        }
    }
}