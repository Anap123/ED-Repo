/*
 * =====================================================================================
 *
 *       Filename:  q1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/09/2019 07:28:26
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
#include <stdlib.h>

typedef struct {
    int idade;
    char nome[50];
    int *notas;
}aluno;

int main(){
    aluno a1, a2;
    a1.idade = 10;
    strcpy(a1.nome, "Pedro");
    a1.idade = 12;
    strcpy(a1.nome, "Maria");

    a1.notas = (int*)malloc(5*sizeof(int));
    a2.notas = (int*)malloc(4*sizeof(int));
    int i;
    double media = 0;
    for(i=0; i <5 ; i++){
        a1.notas[i] = 100;
        media+= a1.notas[i];
    }
    printf("media: %lf\n", (media/5));
    a2.notas = a1.notas;
    for(i=0;i<4;i++){
        a2.notas[i]-=10;
    }

    media = 0;
    for(i=0;i<5;i++){
        media += a1.notas[i];
    }
    media = media/5;
    printf("Media de %s: %lf\n", a1.nome, media);

    media = 0;
    for(i=0;i<4;i++){
        media += a2.notas[i];
    }
    media=media/4;

    printf("Media de %s: %lf\n", a2.nome, media);
    free(a1.notas);
    free(a2.notas);
    return 0;



}
