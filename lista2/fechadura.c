/*
 * =====================================================================================
 *
 *       Filename:  fechadura.c
 *
 *    Description:  Questao URI 2449
 *
 *        Version:  1.0
 *        Created:  21/08/2019 10:13:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campina Grande 
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
void main(){
    int n, m, i, mt=0, mc;
    scanf("%d %d", &n, &m);
    int pinos[n];
    for (i=0;i<n;i++){
        scanf("%d",&pinos[i]);
    }
    for(i=0;i<n;i++){
        mc = fabs(pinos[i]-m);
        printf("%d\n", mc);
        if(pinos[i] > m && i+1<n) pinos[i]-=mc,pinos[i+1]-=mc;
        else if (pinos[i]<m && i+1<n)pinos[i]+=mc, pinos[i+1]+=mc;
        mt+=mc;
    }
    printf("%d\n", mt);

}
