#include <stdio.h>
#include <string.h>
void main()
{
    int n, i, j, len, count;
    char texto[1000], res[1000];
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        gets(texto);
        len = strlen(texto), count = 0;
        for (j = 0; j < len; j++)
        {
            if (j == 0 && texto[j] != ' ')
            {
                res[count] = texto[j];
                count++;
            }
            else if (texto[j] == ' ')
            {
                if (texto[j + 1] != ' ')
                {
                    res[count] = texto[j + 1];
                    count++;
                }
                else
                {
                    continue;
                }
            }
        }
        res[count] = '\0';
        printf("%s\n", res);
    }
}