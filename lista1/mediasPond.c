/*
 * =====================================================================================
 *
 *       Filename:  mediasPond.c
 *
 *    Description:  1079 URI
 *
 *        Version:  1.0
 *        Created:  10/08/2019 10:51:54
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campus Camipna Grande
 *
 * =====================================================================================
 */
#include <stdio.h>
void main(){
	int n, i;
	double a, b, c, media;
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		scanf("%lf %lf %lf", &a, &b, &c);
		media = (a * 2 + b * 3 + c * 5)/10;
		printf("%.1lf\n", media);
	}
}
