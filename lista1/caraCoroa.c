#include<stdio.h>

void main(){
  int n, i, maria, joao, j;
				while(1){
								scanf("%d", &n);
								maria =  joao = 0;
								for (i = 0; i < n; i++){
												scanf("%d", &j);
												if(j == 1){
													maria++;
	
												}
												else{
																joao++;
												}

								}
								if (n==0){
									break;
								}
								printf("Mary won %d times and John won %d times\n", joao, maria);


				}
}
