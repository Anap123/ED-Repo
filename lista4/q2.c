/*
 * =====================================================================================
 *
 *       Filename:  q2.c
 *
 *    Description:  Função splitInt
 *
 *        Version:  1.0
 *        Created:  11/09/2019 08:08:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campina Grande 
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int verifyListInt(const char *s){
    int i, countN = 0;
    for(i = 0; s[i]!='\0';i++){
        if((s[i]<'0' || s[i]>'9') && s[i]!=' ') return 0;
        if(s[i]>='0' && s[i]<='9' &&  s[i+1]==' ') countN++;
    }
    return countN;
}

int* splitInt(const char *s, int *size){
    int qn = verifyListInt(s);
    *size = qn;
    if(!qn) return NULL;
    int vn[qn], i, cn = 0;
    char num[10];
    for(i = 0; s[i]!='\0';i++){
        if(s[i]!=' '){
            num[cn] = s[i];
            cn++;
        }
        else if(s[i]==' ' && cn){
            num[cn] = '\0';
            printf("%d\n", atoi(num));
            cn = 0;
        }
    }
    
   return NULL; 
}
void main(){
    printf("%d", verifyListInt("111 2220 93 "));
    int *num;
    splitInt("123 12312 3", num);
}
