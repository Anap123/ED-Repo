/*
 * =====================================================================================
 *
 *       Filename:  elfo_negro.c
 *
 *    Description:  Questão Elfo das Trevas
 *
 *        Version:  1.0
 *        Created:  02/10/2019 19:20:05
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

typedef struct{
    char nome[100];
    int idade;
    int peso;
    float altura;
}Rena;

int renacmp(Rena *r1, Rena *r2){
    if(r1->peso > r2->peso) return 2;
    else if(r1->peso < r2->peso) return 1;

    if(r1->idade < r2->idade) return 2;
    else if(r1->idade > r2->idade) return 1;

    if(r1->altura < r2->altura) return 2;
    else if(r1->altura > r2->altura) return 1;

    int nc = strcmp(r1->nome, r2->nome);
    if(nc<0) return 2;
    else if(nc>0) return 1;
    else return 0;
}
void main(){
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        int renasT, renasF, j, k;
        scanf("%d %d", &renasT, &renasF);
        Rena renas[renasT];
        for(j = 0; j < renasT; j++){
            Rena r;
            scanf("%s %d %d %f", r.nome, &r.peso, &r.idade, &r.altura);
            renas[j] = r;
        }
        // Sortando as renas
        Rena aux;
        for(j = 1; j < renasT; j++){
            aux = renas[j];
            k = j-1;
            while(k >= 0 && renacmp(&renas[k], &aux)==1){
                renas[k+1] = renas[k];
                k--;
            }
            renas[k+1] = aux;
        }
        printf("CENARIO {%d}\n", i+1);
        for(j = 0; j < renasF; j++){
            printf("%d - %s\n", j + 1, renas[j].nome);
        }
    }
}


