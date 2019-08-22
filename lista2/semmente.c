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
void main(){
    long int tf, maiorD, disIni=1, dias;
    int qg, i;
    scanf("%ld %d", &tf, &qg);
    long int gotas[qg];

    for(i = 0; i<qg; i++){ 
        scanf("%ld",&gotas[i]);
    }
    maiorD = gotas[i]-1;
    for(i = 0; i<qg; i++){
        if(i+1==qg){
            if(tf-gotas[i]>maiorD){
                maiorD = tf-gotas[i];
            }
        }
        else{
            if(gotas[i+1]-gotas[i]-1>maiorD){
                maiorD = gotas[i+1]-gotas[i]-1;
                distIni = 0;
            }
        }
    }
    if(distIni){
        dias = maiorD;
    }
    else{
        dias = maiorD/2;
    }
    printf("%ld\n", dias);

}
