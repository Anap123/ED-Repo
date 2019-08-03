#include<stdio.h>
void main(){
    int hi, mi, hf, mf, mti, mtf;
    int hdura, mdura;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
    mti = (hi*60) + mi;
    mtf = (hf*60) + mf;
    if (mtf > mti){
        hdura = (mtf - mti)/60;
        mdura = (mtf - mti)%60;
    }
    else{
        mdura = 1440 - (mti - mtf);
        hdura = mdura/60;
        mdura %= 60;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hdura, mdura);

}