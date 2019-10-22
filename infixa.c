/*
 * =====================================================================================
 *
 *       Filename:  infixa.c
 *
 *    Description:  Infixa para Posfixa 1077
 *
 *        Version:  1.0
 *        Created:  16/10/2019 07:37:00
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

int isSpecial(char c){
    return (c == '*' || c == '/' || c == '-'|| c == '+'i || c == '^');
}
void main(){
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        char str[301], res[301];
        scanf("%s", str);
        int j, k = 0;
        for(j = 0; str[j] !='\0'; j++){
            if(str[j]!='(' && str[j]!=')' && str[j+1]!='(' && str[j+1] != ')'){
                if(isSpecial(str[j])){
                    res[k] = str[j+1];
                    res[k+1] = str[j];
                    k++;
                }
            }
        }
        printf("%s\n", res);
    }
}
