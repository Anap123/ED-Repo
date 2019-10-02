#include <stdio.h>

void main()
{
    int na, i, n, k;
    scanf("%d", &n);
    for (k = 0; k < n; k++)
    {
        scanf("%d", &na);
        int notas[na], aux[na];
        for (i = 0; i < na; i++)
        {
            scanf("%d", &notas[i]);
            aux[i] = notas[i];
        }
        int nc, j, trocado, countNTrocado = 0;
        for (i = 1; i < na; i++)
        {
            nc = notas[i];
            j = i - 1;
            while (j >= 0 && notas[j] < nc)
            {
                notas[j + 1] = notas[j];
                j--;
            }
            notas[j + 1] = nc;
        }
        for (i = 0; i < na; i++)
            if (notas[i] == aux[i])
                countNTrocado++;
        printf("%d\n", countNTrocado);
    }
}