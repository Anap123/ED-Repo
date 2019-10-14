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

void main()
{
    int n, i;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        int qp = 0, j;
        char *aux = (char *)malloc(2500 * sizeof(char));
        char delim[] = " ";
        char str[50][50];
        fgets(aux, 2500, stdin);
        char *ptr = strtok(aux, delim);

        while (ptr != NULL)
        {
            ptr = strtok(NULL, delim);
            strcpy(ptr, str[qp]);
            qp++;
        }
        for (j = 0; j < qp; j++)
            printf("%s\n", str[qp]);
        free(aux);
    }
}
