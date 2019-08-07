/*
 * =====================================================================================
 *
 *       Filename:  kiloman.c
 *
 *    Description:  Questão 1250 URI
 *
 *        Version:  1.0
 *        Created:  07/08/2019 18:28:25
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campus Camipna Grande
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
void main(){
	int i,n;
	int t,j, atingido, tiros[50], tempi, altura, pulou;
	char acoes[50], tempc, acao;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%d", &t);
		atingido = 0;
		for(j = 0; j < t; j++) {
			scanf("%d", &tiros[j]);
		}
		scanf("%s", acoes);
		for(j = 0; j < t; j++){
			acao = acoes[j];
			altura = tiros[j];
			if ( (acao == 'S') && (altura <= 2)){
				atingido++;
			}
			else if ( (acao == 'J') && (altura > 2)){
				atingido++;

		}

		}
		printf("%d\n", atingido);


	}

}
