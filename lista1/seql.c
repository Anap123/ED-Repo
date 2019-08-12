/*
 * =====================================================================================
 *
 *       Filename:  seql.c
 *
 *    Description:  1145 URI
 *
 *        Version:  1.0
 *        Created:  10/08/2019 11:01:09
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campus Camipna Grande
 *
 * =====================================================================================
 */
#include <stdio.h>
void main(){
	int x, j;  
	long y, i, atual;
	scanf("%d %ld", &x, &y);
	for (i = 1; i <= y; i+=x){
		for(j = 0; j < x; j++){
			atual = i+j;
			if (atual > y) break;
			if (j ==x-1) printf("%ld\n", atual);
			else printf("%ld ", atual);
		}
	}	
}
