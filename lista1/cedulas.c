#include<stdio.h>

void main(){
	int valor,i, qc;
	int cedulas[7] = {100, 50, 20, 10, 5, 2, 1};
	scanf("%d",&valor);
	printf("%d\n", valor);
	
	for(i = 0; i < 7; i++){
		qc = valor/cedulas[i];
		valor = valor - qc*cedulas[i];
		printf("%d nota(s) de R$ %d,00\n", qc,cedulas[i]);
	}
}
