/*
 * =====================================================================================
 *
 *       Filename:  ordenacao_tam.c
 *
 *    Description:  Ordenação por tamanho 1244
 *
 *        Version:  1.0
 *        Created:  01/10/2019 17:13:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio (punisher077), arthur.mts@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
void main()
{
    int n, i;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        char str[50 * 50];
        fgets(str, 50 * 50, stdin);
        int j, ini = 0, count = 0, countP = 1;
        int inis[50], fins[50];
        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[j] == ' ' && str[j + 1] != '\0')
            {
                printf("%d\n", count);
                count = 0, countP++, fins[countP] =;
            }
            else if(str[j + 1] != '\0')
                count++, inis[j];
        }
        printf("%d, %d\n", count, countP);
    }
}
