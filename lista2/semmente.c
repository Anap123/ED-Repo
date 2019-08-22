/*
 * =====================================================================================
 *
 *       Filename:  semmente.c
 *
 *    Description:  Semente 2452
 *
 *        Version:  1.0
 *        Created:  22/08/2019 14:24:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campina Grande 
 *
 * =====================================================================================
 */
#include <stdio.h>
int main(){
    long int tf, maiorD, temp;
    int qg, i;
    scanf("%ld %d", &tf, &qg);
    long int gotas[qg];

    for(i = 0; i<qg; i++){ 
        scanf("%ld",&gotas[i]);
    }
    maiorD = gotas[0]-1;
    for(i = 0; i<qg; i++){
        if(i+1==qg){
            temp = tf-gotas[i];
        }
        else{
            temp = (gotas[i+1]-gotas[i]-1)/2 + (gotas[i+1]-gotas[i]-1)%2;
        }
        if(temp>maiorD) maiorD=temp;
    }
    printf("%ld\n", maiorD);
    return 0;
}
