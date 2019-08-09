/*
 * =====================================================================================
 *
 *       Filename:  elevador.c
 *
 *    Description:  Questão 2378
 *
 *        Version:  1.0
 *        Created:  09/08/2019 11:05:27
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campus Camipna Grande
 *
 * =====================================================================================
 */
#include <stdio.h>
void main(){
	int n, c, i, s, e;
	int qp = 0;
	char exced = 'N';
	scanf("%d %d",&n,&c);
	for (i = 0; i < n; i++){
		scanf("%d %d", &s, &e);
		qp = qp + e - s;
		exced = (qp > c) ? 'S': exced;
	}
	printf("%c\n",exced);
}
