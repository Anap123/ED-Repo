/*
 * =====================================================================================
 *
 *       Filename:  pao_metro.c
 *
 *    Description:  Pao a Metro
 *
 *        Version:  1.0
 *        Created:  01/10/2019 16:53:59
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
    int np, npa, i, fim = 0;

    scanf("%d", &np);
    scanf("%d", &npa);
    
    int paes[npa];
    for (i = 0; i < npa; i++)
    {
        scanf("%d", &paes[i]);
        if (paes[i] > fim)
            fim = paes[i];
    }

    int tp = 0, ini = 0, meio, cp, aux;
    while (fim >= ini)
    {
        meio = (fim + ini) / 2, cp = 0;
        for (i = 0; i < npa; i++)
            cp += (paes[i] / meio);
        if (cp == np && meio > tp)
        {
            tp = meio;
            break;
        }
        if (cp < np)
        {
            fim = meio - 1;
        }
        else if (cp > np)
        {
            ini = meio + 1;
        }
    }
    printf("%d\n", tp);
}
