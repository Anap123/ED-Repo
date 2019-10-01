#include <stdio.h>

void main()
{
    int n, i, na, j, nc;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &na);
        int notas[na],notass[na],k, count = 0;
        for (j = 0; j < na; j++) scanf("%d", &notas[j]);

        for (j = 1; j < na; j++)
        {
            nc = notas[j];
            k = j - 1;
            if(nc > notas[k]) count++;
            //while (k >= 0 && notas[k] > nc)
            //{
            //    notas[k + 1] = notas[k];
            //    k--;
            //}
            
            //notas[k+1] = nc;
        }
        printf("%d\n", na-count);
    }
}