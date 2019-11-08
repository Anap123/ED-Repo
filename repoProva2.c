/*
 * =====================================================================================
 *
 *       Filename:  repoProva2.c
 *
 *    Description:  Questão dos modelos
 *
 *        Version:  1.0
 *        Created:  08/11/2019 09:41:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

typedef struct{
    char nome[51];
    float altura;
}modelo;

int main(){
    int n, i;
    float alt_d;
    scanf("%d", &n);
    scanf("%f", &alt_d);
    modelo ms[n];
    for(i = 0; i < n; i++){
        scanf("%s %f", ms[i].nome, &ms[i].altura);
    }
    int ini = 0, f = n, m;
    char *res;
    while(i <= f){
        m = (ini+f)/2;
        res = ms[m].nome;
        if(ms[m].altura == alt_d) break;
        else if(alt_d > ms[m].altura) i = m + 1;
        else f = m - 1;
    }
    printf("%s\n", res);
    return 0;
}
