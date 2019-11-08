#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define MAX 530000

int main(){
    int q, i;
    scanf("%d",  &q);
    char frase[MAX];
    char qs[q];
    scanf("%s", qs);
    scanf("%s", frase);
    for(i = 0;i < q; i++){
        char c = qs[i];
        int res = -1;
        int ini = 0, fim = strlen(frase), meio;
        // Busca binaria
        //complexidade o(log(n))
        while(fim >= ini){
            meio = (fim+ini)/2;
            if(c == frase[meio]){
                res = meio % 21;
                fim = meio - 1;
            }
            
            else if(c < frase[meio])
                fim = meio - 1;
            
            else ini = meio + 1;
        }
        printf("%d\n", res);        
    }
    return 0;
}
