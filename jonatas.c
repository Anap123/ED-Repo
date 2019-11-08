#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
} nome;

int main(){
    int n, i;
    float ideal;
    scanf("%d", &n);
    scanf("%f", &ideal);
    float at[n];
    nome nomes[n];
    for(i=0; i<n; i++){
        scanf("%s %f", nomes[i].nome, &at[i]);
    }
    int ini =0 , fim = n-1, tru =0, m=0;
    float aux = -1;
    int res = 0;
    while(ini<=fim && aux<ideal){
        m = (ini+fim)/2;
        if(at[m] == ideal){
            printf("%s\n", nomes[m].nome);
            tru = 1;
            break;
        }else if(at[m] < ideal){
            ini = m+1;
        }else fim = m-1;
        aux = at[m];
        res = m;
    }
    if(tru == 0) printf("%s\n", nomes[res].nome);
    return 0;
}