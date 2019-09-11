/*
 * =====================================================================================
 *
 *       Filename:  teste.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/09/2019 08:13:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campina Grande 
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
void main(){
    int *v;
    v = (int*)malloc(2*sizeof(int));
    printf("%ld %ld\n",sizeof(v), sizeof(int));
    printf("%d", (int)"41");
}
