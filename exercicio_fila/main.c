/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Implementação dos testes do exercicios
 *    de fila.
 *
 *        Version:  1.0
 *        Created:  22/10/2019 18:44:19
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
#include "fila_priori.h"

int main(){
    printf("--------Fila do consultorio Dr. Maurício-----\n");
    printf("--------Software pela Thomaz Solutions-----\n");

    Fila_Prioritaria *f = cria_filha_pri();

    int op;
    while(1){
        printf("DIGITE:\n1 PARA CADASTRAR NA FILA\n2 PARA CHAMAR O PACIENTE DA VEZ\n0 PARA SAIR\n");
        scanf("%d", &op);
        if(!op) break;

        if(op==1){
            Pessoa p;
            printf("Digite o nome do paciente: ");
            scanf("%s", p.nome);
            printf("\nDigite a idade do paciente: ");
            scanf("%d", &p.idade);
            printf("\n");
            insere_pri(f, p);
        }
        else if(op==2){
            if(!is_empty_pri(f)) printf("Chamando %s!\n ", retira_pri(f).nome);
            else printf("Fila vazia!\n");
        }
        else printf("Opção Invalida!\n");
    }
    return 1;
}