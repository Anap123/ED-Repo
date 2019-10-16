/*
 * =====================================================================================
 *
 *       Filename:  ordenacao_tam.c
 *
 *    Description:  Ordenação por tamanho 1244
 *
 *        Version:  1.0
 *        Created:  01/10/2019 17:13:49
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

#define MAX 3500

typedef struct{
    char str[51];    
    int pos;
} Palavra;

int compare(const void *a, const void *b);

void main()
{
    int n, i;
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        int j, cp = 0, cl = 0;
        char str[MAX];

        Palavra ps[50];
        gets(str);
        for(j = 0; str[j] !='\0';j++){
            if(str[j] != ' '){
                ps[cp].str[cl] = str[j];
                cl++;
            }
            else{
                ps[cp].str[cl] = '\0';
                ps[cp].pos = cp;
                cp++;
                cl = 0;
            }
        }

        ps[cp].str[cl] = '\0';
        ps[cp].pos = cp;
        cp++;
        qsort(ps, cp, sizeof(Palavra), compare);

        for(j = 0; j < cp; j++){
            if(j < cp - 1) printf("%s ", ps[j].str);
            else printf("%s", ps[j].str);
        }
        printf("\n");
    }
}
int compare(const void *a, const void *b){
    Palavra *p1 = (Palavra*) a;
    Palavra *p2 = (Palavra*) b;
    int len1 = strlen(p1->str);
    int len2 = strlen(p2->str);
    if(len1==len2) return ((p1->pos) - (p2->pos));
    else return len2 - len1;
}

