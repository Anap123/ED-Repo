/*
 * =====================================================================================
 *
 *       Filename:  uri1021.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/09/2019 21:44:49
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
    int i, qn;
    float notas[]= {100,50,20,10,5,2}, moedas[] = {1.00,0.5,0.25,0.10,0.05,0.01},val;
    scanf("%f", &val);
    printf("NOTAS:\n");
    for(i=0;i<6;i++){
        qn = val/notas[i];
        printf("%d nota(s) de R$ %.2f\n",qn, notas[i]);
        val = val - notas[i]*qn;
    }
    printf("MOEDAS:\n");
    for(i=0;i<6;i++){
        qn = val/moedas[i];
        printf("%d moeda(s) de R$ %.2f\n",qn, moedas[i]);
        val = val - moedas[i]*qn;
    }

}
