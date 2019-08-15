#include <stdio.h>
int main()
{
    int a = 1, c = 1, i, j, temp, buracos;
    while (1)
    {
        scanf("%d %d", &a, &c);
        if (a == 0 && c == 0) break;
        buracos = 0;
        int bloco[a][c];
        int blocoEsculpido[a][c];
        for (j = 0; j < a; j++)
        {
            for (i = 0; i < c; i++)
            {
                bloco[j][i] = 1;
                blocoEsculpido[j][i] = 1;
            }
        }

        for (i = 0; i < c; i++)
        {
            scanf("%d", &temp);
            for (j = 0; j < a - temp; j++)
            {
                blocoEsculpido[j][i] = 0;
            }
        }

        for (j = 0; j < a; j++)
        {
            for (i = 0; i < c; i++)
            {

                //printf("%d ", blocoEsculpido[j][i]);
            }
            //printf("\n");
        }

        for (i = 0; i < a; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (j < c - 1)
                {
                    if (blocoEsculpido[i][j] == 0 && blocoEsculpido[i][j + 1] == 1)
                    {
                        buracos++;
                        //printf("+1 no %d %d\n", i, j);
                    }
                }
                else
                {
                    if (blocoEsculpido[i][j] == 0)
                    {
                        buracos++;
                        //printf("+1 no %d %d\n", i, j);
                    }
                }
            }
        }
        printf("%d\n", buracos);
    }
    return 0;
}
