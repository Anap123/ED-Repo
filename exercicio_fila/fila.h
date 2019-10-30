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



#include <stdio.h>
#include <stdlib.h>

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

Fila_Pessoas *cria_filha()
{
    Fila_Pessoas *f = (Fila_Pessoas *)malloc(sizeof(Fila_Pessoas));
    f->inicio = 0;
    f->n = 0;
    return f;
}

int insere(Fila_Pessoas *f, Pessoa p)
{
    int fim = 0;
    if (f->n < MAX)
    {
        fim = (f->inicio + f->n) % MAX;
        f->vet[fim] = p;
        f->n++;
        return 1;
    }
    return -1;
}

Pessoa retira(Fila_Pessoas *f)
{
    Pessoa p;
    if (f->n > 0)
    {
        p = f->vet[f->inicio];
        f->inicio = ((f->inicio) + 1) % MAX;
        f->n--;
    }
    return p;
}


int is_empty(Fila_Pessoas *f)
{
    return f->n == 0;
}

int is_full(Fila_Pessoas *f)
{
    return f->n == MAX;
}