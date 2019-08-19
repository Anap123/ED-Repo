#include <stdio.h>
#include <string.h>
void main()
{
    int n, i;
    scanf("%d", &n);
    char texto[n][21];
    for (i = 0; i < n; i++)
    {
        scanf("%s", texto[i]);
        if (strlen(texto[i]) == 3)
        {
            if (texto[i][0] == 'O' && texto[i][1] == 'B')
            {
                texto[i][2] = 'I';
            }
            else if (texto[i][0] == 'U' && texto[i][1] == 'R')
            {
                texto[i][2] = 'I';
            }
        }
        if (i == n - 1)
            printf("%s", texto[i]);
        else
            printf("%s ", texto[i]);
    }
    printf("\n");
}