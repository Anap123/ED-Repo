#include <stdio.h>
void main()
{
    int n, i, maior, iMaior, iSeg, j, count;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        int suspeitos[n], sorted[n];
        iMaior = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &suspeitos[i]);
            if (i == 0)
                maior = suspeitos[i];
            else if (suspeitos[i] >= maior)
                maior = suspeitos[i];
        }

        for (i = 0; i < n; i++)
        {
            count=0;
            if (suspeitos[i] <= maior)
            {
                for (j = 0; j < n; j++)
                {
                    if (suspeitos[i] >= suspeitos[j])
                    {
                        count++;
                    }
                }
                if (count == n-1) iSeg = i;
            }
        }
        printf("%d\n", iSeg+1);
    }
}