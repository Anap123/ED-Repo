/*
 * =====================================================================================
 *
 *       Filename:  combinador.c
 *
 *    Description:  1238
 *
 *        Version:  1.0
 *        Created:  14/08/2019 08:40:53
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campina Grande 
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
void main()
{
    int n, i, count, len1, len2, ind, j;
    char p1[51], p2[51], pres[101];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s %s", p1, p2);
        count = ind = 0;
        len1 = (strlen(p1));
        len2 = (strlen(p2));
        while (1)
        {
            if (count < len1)
            {
                pres[ind] = p1[count];
                ind++;
            }
            if (count < len2)
            {
                pres[ind] = p2[count];
                ind++;
            }
            if (count >= len1 && count>=len2)
                break;
            count++;
        }
        pres[ind] ='\0';

        printf("%s\n", pres);

    }
}