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
    int i, qnotas[] = {0,0,0,0,0}, qmoedas[] = {0,0,0,0,0};
    float val, va;
    float notas[] = {2.0,5.0,10.0,20.0,50.0,100.0},moedas[] = {0.01,0.05,0.10,0.25,0.50,1.0};
    scanf("%f", &val);
    for(i = 5; i >= 0; i--){
        while(val - notas[i] >= 0){
            val = val - notas[i];
            qnotas[i]++;
        }
    }
    for(i=5;i>=0;i--){
        while(val - moedas[i] >= 0){
            val = val -moedas[i];
            qmoedas[i]++;
        }
    }
    printf("NOTAS:\n");
    for(i = 11; i >= 0; i--){
        if(i==5) printf("MOEDAS:\n");
        if(i>5) printf("%d notas(s) de R$ %.2f\n", qnotas[i-6], notas[i-6]);
        if (i<=5) printf("%d moeda(s) de R$ %.2f\n", qmoedas[i], moedas[i]);
    }
}
