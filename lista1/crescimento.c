#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i, countAnos;
    long pa, pb, proximoA, proximoB;
    double g1, g2, crescimentoA, crescimentoB;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%ld %ld %lf %lf", &pa, &pb, &g1, &g2);
        countAnos = 1;
        crescimentoA = 1 + (g1 / 100), crescimentoB = 1 + (g2 / 100);
        while (proximoA <= proximoB)
        {
            pa = (pa * crescimentoA);
            pb = (pb * crescimentoB);
            countAnos++;
            proximoA = pa*crescimentoA;
            proximoB = pb*crescimentoB;
            if (countAnos > 100)
            {
                printf("Mais de 1 seculo.");
                exit(0);
            }
        }

        printf("%d anos.", countAnos);
    }
}