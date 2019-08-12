/*
 * =====================================================================================
 *
 *       Filename:  notasValid.c
 *
 *    Description:  1118
 *
 *        Version:  1.0
 *        Created:  12/08/2019 16:52:29
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campus Camipna Grande
 *
 * =====================================================================================
 */
#include <stdio.h>
void main(){
	int conti = 1;
	double nota, sum = 0, count = 0;
	while(conti == 1){
		scanf("%lf", &nota);
		if (nota < 0 || nota > 10){
			printf("nota invalida\n");
			continue;
		}
		sum += nota;
		count ++;
		if (count == 2){
			printf("media = %.2lf\n", sum/2);
			while(1){
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d", &conti);
				if (conti == 1 || conti == 2) break;
			}
			count = sum = 0;
			
		}
		
	}
}
