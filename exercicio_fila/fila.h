/*
 * =====================================================================================
 *
 *       Filename:  fila.h
 *
 *    Description:  Interface fila
 *
 *        Version:  1.0
 *        Created:  22/10/2019 18:00:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio (punisher077), arthur.mts@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#define MAX 100

typedef struct
{
    char nome[51];
    int idade;
} Pessoa;
typedef struct
{
    int n;
    int inicio;
    Pessoa vet[MAX];
} Fila_Pessoas;

Fila_Pessoas *cria_filha();

Pessoa retira(Fila_Pessoas *f);

int is_empty(Fila_Pessoas *f);

int is_full(Fila_Pessoas *f);
