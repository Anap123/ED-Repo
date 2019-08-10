/*
 * =====================================================================================
 *
 *       Filename:  seqn.c
 *
 *    Description:  Quetão 11011
 *
 *        Version:  1.0
 *        Created:  09/08/2019 17:02:35
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campus Camipna Grande
 *
 * =====================================================================================
 */
#include <stdio.h>
void main(){
	int m,n, temp, i, sum;
	while(1){
		scanf("%d %d", &m, &n);
		if(m > 0 && n > 0){
			sum = 0;
			if (n > m){
				temp = m;
				m = n;
				n = temp;
			}
			for(i = n; i <= m;i++){
				printf("%d ", i);
				sum += i;

			}
			printf("Sum=%d\n", sum);
		
		}
		else{
			break;
		}	
	}



}
