/*
 * =====================================================================================
 *
 *       Filename:  semente.c
 *
 *    Description:  URI 2452
 *
 *        Version:  1.0
 *        Created:  21/08/2019 16:22:34
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
    long f, res=0;
    int g,i;
    scanf("%ld %d",&f,&g);
    long gs[g];
    for(i = 0; i < g; i++){
        scanf("%ld", &gs[i]);
        if(i==0) res+=gs[i];
        else if(i==g-1) res+=(f-gs[i]);
    }
    for(i = 1; i < g-1; i++){
    }

}
