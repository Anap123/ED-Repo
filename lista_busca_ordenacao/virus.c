/*
 * =====================================================================================
 *
 *       Filename:  virus.c
 *
 *    Description:  Virus 2567
 *
 *        Version:  1.0
 *        Created:  02/10/2019 19:56:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio (punisher077), arthur.mts@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

void main(){
    int n, i;
    while(scanf("%d", &n)!=EOF){
        int idades[n];
        for(i = 0; i < n; i++) scanf("%d", &idades[i]);
        int letals = 0, tmp, ml = 0, j, im = -1;
        for(i = 0; i < n; i++){
           tmp = idades[i];
           for(j = i+1; j < n; j++){
               if(abs(tmp - idades[j]) > ml && idades[j]>=0){
                   ml = abs(tmp-idades[j]);
                   printf("%d\n", ml);
                   im = j;
               }
           }
           letals+= ml;
           idades[im] = -1; 
        }
        printf("%d\n", letals);
    }
}
