#include <stdio.h>
void main()
{
    int alt, camad, i, j, k, buracos = 0, blocoN[10000];
    while (1)
    {
        scanf("%d %d", &alt, &camad);
        if (alt < 1 && camad < 1)
            break;

        for (i = 0; i < camad; i++)
            scanf("%d ", &blocoN[i]);

        for (j = alt; j > 0; j--)
        {
            for (k = 0; k < camad; k++)
            {
                if (blocoN[k] < j && (k + 1 < camad && blocoN[k + 1] >= j))
                    buracos++;

                else if (k == camad - 1 && blocoN[k] < j)
                    buracos++;
            }
        }

        printf("%d\n", buracos);
        buracos = 0;
    }
}
