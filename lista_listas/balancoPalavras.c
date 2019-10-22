/*
 * =====================================================================================
 *
 *       Filename:  balancoPalavras.c
 *
 *    Description:  1068 URI
 *
 *        Version:  1.0
 *        Created:  18/10/2019 19:05:10
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio (punisher077), arthur.mts@gmail.com
 *   Organization:  IFPB Campina Grande
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int hasCouple(char *str, int start, int end)
{
    int i;
    for (i = end - 1; i > start; i--)
        if (str[i] == ')')
            return i;

    return -1;
}
int main()
{
    char str[1001];
    while (scanf("%s", str) != EOF)
    {
        char c;
        int counti = 0, countf = 0;
        int i, posLast = strlen(str), posIni = 0, correct = 1, hasStart = 0;
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == '(')
            {
                counti++;
                posLast = hasCouple(str, i, posLast);
                //printf("%d %d\n",i, posLast);
                if (posLast < 0)
                {
                    correct = 0;
                    break;
                }
            }
            else if (str[i] == ')')
                countf++;
        }
        if (counti - countf)
            correct = 0;
        if (correct)
            printf("correct\n");
        else
            printf("incorrect\n");
    }
    return 0;
}
