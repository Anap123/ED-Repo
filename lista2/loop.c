/*
 * =====================================================================================
 *
 *       Filename:  loop.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  14/08/2019 07:38:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campina Grande 
 *
 * =====================================================================================
 */
#include <stdio.h>
void main()
{
    int n = 2, i, count, ant, prox;
    while (n != 0)
    {
        scanf("%d", &n);
        int seq[n];
        count = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &seq[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                ant = seq[n - 1];
                prox = seq[i + 1];
            }
            else if (i == n - 1)
            {
                ant = seq[i - 1];
                prox = seq[0];
            }
            else
            {
                ant = seq[i - 1];
                prox = seq[i + 1];
            }
            if ((seq[i] < ant && seq[i] < prox) || (seq[i] > ant && seq[i] > prox))
                count++;
        }
        if (n > 0)
            printf("%d\n", count);
    }
}
