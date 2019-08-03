#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char p1[20], p2[20], p3[20];
    scanf("%s %s %s", p1, p2, p3);
    if((strncmp(p1, "vertebrado") == 0)){
        if((strcmp(p2, "ave")) == 0) {
            if((strcmp(p3, "carnivoro")) == 0){
                printf("aguia");
            } else {
                printf("pomba");
            }
        else {
            if((strcmp(p3, "onivoro") == 0)){
                printf("humano");
            } else{
                printf("vaca");
            }
        }
        
        }
    else {
        if((strcmp(p2, "inseto")) == 0){
            if((strcmp(p3, "hematofago")) == 0){
                printf("pulga");
            } else{
                printf("lagarta");
            }
        } else{
            if((strcmp(p3, "hematofago")) == 0){
                printf("sanguessuga");
            } else{
                printf("onivoro");
            }
        }
    }
    
    }
    return (0);
}