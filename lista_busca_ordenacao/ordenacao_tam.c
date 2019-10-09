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
#include <string.h>
typedef struct
{

} Palavra;

void main()
{
    int n, i;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        char str[50 * 50], *token;
        char del[] = " ";
        int countP = 0, j;
        int lens[50];
        fgets(str, 50 * 50, stdin);
        token = strtok(str, del);
        while (token != NULL)
        {
            if (token[0] != '\n' && token[0] != ' ')
            {
                lens[countP] = strlen(token);
                countP++;
            }
            printf("%ld\n", token);
            token = strtok(NULL, del);
        }
        printf("%d\n", countP);
        for (j = 0; j < countP; j++)
            printf("%d\n", lens[j]);
        //printf("%s\n", str);
    }
}
