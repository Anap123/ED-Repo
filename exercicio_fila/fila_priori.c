#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "fila_priori.h"

Fila_Prioritaria *cria_filha_pri()
{
    Fila_Prioritaria *f = (Fila_Prioritaria *)malloc(sizeof(Fila_Prioritaria));
    f->f_normal = cria_filha();
    f->f_priori = cria_filha();
    return f;
}

int insere_pri(Fila_Prioritaria *f, Pessoa p)
{
    if (p.idade < 65)
        return insere(f->f_normal, p);
    else
        return insere(f->f_priori, p);
}

Pessoa retira_pri(Fila_Prioritaria *f)
{
    if (!is_empty(f->f_priori))
        return retira(f->f_priori);

    else
        return retira(f->f_normal);
}

int is_full_pri(Fila_Prioritaria *f)
{
    return (is_full(f->f_normal) && is_full(f->f_priori));
}

int is_empty_pri(Fila_Prioritaria *f)
{
    return (is_empty(f->f_normal) && is_empty(f->f_priori));
}
