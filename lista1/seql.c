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
	int x;  
	long y, i;
	scanf("%d %ld", &x, &y);
	for (i = x; i <= y; i+2){
		printf("%ld %ld %ld\n", i++, i, i+2);
	}	
}
