#include <stdio.h>
void main()
{
    int q, i;
    unsigned long num, j, contDiv;
    scanf("%d", &q);
    for (i = 0; i < q; i++)
    {
        contDiv = 0;
        scanf("%lu", &num);
        for (j = 1; j <= num; j++)
        {
            if (num % j == 0)
            {
                contDiv++;
            }
            if (contDiv > 2)
            {
                break;
            }
        }
        if (contDiv == 2)
        {
            printf("%lu eh primo\n", num);
        }
        else
        {
            printf("%lu nao eh primo\n", num);
        }
    }
}