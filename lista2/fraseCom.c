#include <stdio.h>
#include <string.h>
void main()
{
    int n, i, len, j, k, count;
    scanf("%d", &n);
    char frase[1024], atual;
    getchar();
    for (i = 0; i < n; i++)
    {
        count = 0;
        fgets(frase, 1024, stdin);
        len = strlen(frase);
        for (j = 97; j <= 122; j++)
        {
            for (k = 0; k < len; k++)
            {
                if (j == (int)frase[k])
                {
                    count++;
                    break;
                }
            }
        }
        if (count == 26)
            printf("frase completa\n");
        else if (count >= 13)
            printf("frase quase completa\n");
        else
            printf("frase mal elaborada\n");
    }
}