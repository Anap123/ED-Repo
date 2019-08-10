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

int sum(long int lista[], long int len){
	long int i,sum = 0;	
	for(i = 0; i < len;i++){
		sum+=lista[i];
	}
	return sum;
}

long int areaTapete(long int lista[], long int len){
	long int i;	
	long int tam = 0;
	for(i = 0; i < len;i++){
		tam+=lista[i]*lista[i];
	}
	return tam;
}

void main(){
	long int tubo, qt;
	scanf("%ld %ld", &tubo, &qt);

	long int i,j,k, maior = 0, temp;
	long int nums[qt];
	for (i = 0; i < qt; i++){
		nums[i] = 0;
	}
	for (i = 0; i < qt; i++){
		for (j = 0; j < tubo; j++){
			temp = nums[i];
			nums[i] = j;
			if (sum(nums, qt) > tubo){
					nums[i] = temp;
			}
			if(areaTapete(nums, qt) > maior){
				maior = areaTapete(nums, qt);
			}
		}
	}
	printf("%ld\n", maior);



}

