#include<stdio.h>
int main(){
	int ns[3], cresc[3];
	int i,j, temp;
	scanf("%d %d %d", &ns[0],&ns[1],&ns[2]);
	
	for(j = 0; j < 3; j++){
		cresc[j] = ns[j];
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3;j++){
			if(cresc[i] < cresc[j]){
				temp = cresc[i];
				cresc[i] = cresc[j];
				cresc[j] = temp;
			}
			
		}
	}
	
	for (i = 0; i < 3; i++){
		printf("%d\n", cresc[i]);
	}
	printf("\n");
	for (i = 0; i < 3; i++){
		printf("%d\n", ns[i]);
	}
	return(0);
}
