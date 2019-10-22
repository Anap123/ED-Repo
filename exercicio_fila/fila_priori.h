/*
 * =====================================================================================
 *
 *       Filename:  fila_prioritaria.c
 *
 *    Description:  Implementação da fila prioritaria
 *
 *        Version:  1.0
 *        Created:  22/10/2019 18:27:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio (punisher077), arthur.mts@gmail.com
 *   Organization:  IFPB Campina Grande
 *
 * =====================================================================================
 */
#include "fila.h"

typedef struct
{
    Fila_Pessoas *f_normal;
    Fila_Pessoas *f_priori;
}Fila_Prioritaria;

Fila_Prioritaria *cria_filha_pri();

int insere_pri(Fila_Prioritaria *f, Pessoa p);

Pessoa retira_pri(Fila_Prioritaria *f);

int is_full_pri(Fila_Prioritaria *f);

int is_empty_pri(Fila_Prioritaria *f);
