/*
 * =====================================================================================
 *
 *       Filename:  qProvaTeorica.c
 *
 *    Description:  Questão de string da prova teorica
 *
 *        Version:  1.0
 *        Created:  06/11/2019 08:14:15
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
#include <string.h>

#define MAX 530000

int main(){
    int q, i;
    scanf("%d", &q);
    char str[MAX];
    char res[q];
    fgets(res, q, stdin);
    fgets(str, MAX, stdin);
    for(i = 0; i < q; i++){
        int pos = -1, ini = 0, f = strlen(str), meio;
        while(i < f){
            meio = (ini + f)/2;
            if(str[meio] == res[i]){
                fim = meio - 1;
                res = meio;
            }
            else if(res[i] < str[meio])
                fim = meio - 1;
            else
                ini = meio + 1;
        }
        printf("%d\n", pos);
    }
    return 0;
}
