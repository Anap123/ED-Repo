#include<stdio.h>
void main(){
    int n, i, anterior, maiorSeq, seq, temp;
    maiorSeq = 0, seq = 0;
    scanf("%d", &n);
    int vals[n];
    for (i = 0; i < n; i++){
        scanf("%d", &temp);
        vals[i] = temp;
        if (i == 0 | temp != anterior){
            seq = 1;
        }
        else{
            seq ++;
        }
        if(seq > maiorSeq){
            maiorSeq = seq;
        }
        anterior = temp;
    }
    printf("%d\n", maiorSeq);
}