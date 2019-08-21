/*
 * =====================================================================================
 *
 *       Filename:  pecaPerdida.c
 *
 *    Description: Questao 2322 
 *
 *        Version:  1.0
 *        Created:  21/08/2019 15:52:55
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campina Grande 
 *
 * =====================================================================================
 */
#include <stdio.h>
void main(){
    int n, i, sum = 0, tmp;
    scanf("%d", &n);
    for(i = 1; i < n; i++){
        scanf("%d", &tmp);
        sum += tmp;
    }
    printf("%d\n",( ((1+n)*n)/2-sum));

}
