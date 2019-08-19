#include <stdio.h>
#include <string.h>
void main()
{
    int n, i, j, len, count;
    scanf("%d", &n);
    getchar();
    char texto[51];
    for (i = 0; i < n; i++)
    {
        fgets(texto, 50, stdin);
        len = strlen(texto), count = 0;
        char res[26];
        for (j = 0; j < len; j++)
        {
            if (j == 0 && texto[j] != ' ')
            {
                res[count] = texto[j];
                count++;
            }
            else if (texto[j] == ' ' && j + 1 < len && texto[j + 1] != ' ')
            {
                res[count] = texto[j + 1];
                count++;
            }
        }
        res[count] = '\0';

        printf("%s\n", res);
    }
}