#include <stdio.h>
#include <string.h>
void main()
{
    int n, i, len, j, k, count;
    scanf("%d", &n);
    char frase[1001], atual;
    getchar();
    for (i = 0; i < n; i++)
    {
        count = 0;
        fgets(frase, 1001, stdin);
        len = strlen(frase) - 1;
        for (j = 0; j < len; j++)
        {
            atual = frase[j];
            if (atual != '0' && atual != ',' && atual != ' ')
            {
                count++;
                for (k = 0; k < len; k++)
                {
                    if (frase[k] == atual) frase[k] = '0';
                    
                }
            }
        }
        if (count == 26)
            printf("frase completa\n");
        else if (count >= 13 && count < 26)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
    }
}