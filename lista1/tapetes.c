/*
 * =====================================================================================
 *
 *       Filename:  tapetes.c
 *
 *    Description:  Questão 2472
 *
 *        Version:  1.0
 *        Created:  09/08/2019 11:24:38
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campus Camipna Grande
 *
 * =====================================================================================
 */
#include <stdio.h>


void main(){
	long long  tubo, n, soma;
	scanf("%lld %lld", &tubo, &n);
	soma = n-1 + (tubo-(n-1))*(tubo-(n-1));
	printf("%lld\n", soma);
}

