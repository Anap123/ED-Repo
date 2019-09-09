/*
 * =====================================================================================
 *
 *       Filename:  stc.c
 *
 *    Description:  struct
 *
 *        Version:  1.0
 *        Created:  09/09/2019 18:11:46
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
typedef struct {
    char nome[50], cpf[13], endereco[100], nascimento[12];
    float peso, altura;
} Pessoa;

void main(){
    //Inicializando struct com valores
    //Eles precisam estar na ordem correta!
    Pessoa p2 = {"Joao da Silva", "12345678", "07/11/1983", 50, 1};
    p2.peso = 50.4;
    printf("Peso: %f Altura: %f\n", p2.peso, p2.altura);
}
