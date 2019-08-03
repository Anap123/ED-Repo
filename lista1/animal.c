#include <stdio.h>
#include <string.h>
int main()
{
    char tipo1[30], tipo2[30], tipo3[30];
    scanf("%s", &tipo1);
    scanf("%s", &tipo2);
    scanf("%s", &tipo3);
    if (strcmp(tipo2, "inseto") == 0)
    {
        if (strcmp(tipo3, "hematofago") == 0)
        {
            printf("pulga\n");
        }
        else
        {
            printf("lagarta\n");
        }
    }
    else if (strcmp(tipo2, "anelideo") == 0)
    {
        if (strcmp(tipo3, "hematofago") == 0)
        {
            printf("sanguessuga\n");
        }
        else
        {
            printf("minhoca\n");
        }
    }
    else if (strcmp(tipo2, "mamifero") == 0)
    {
        if (strcmp(tipo3, "onivoro") == 0)
        {
            printf("homem\n");
        }
        else
        {
            printf("vaca\n");
        }
    }
    else{
        if (strcmp(tipo3, "carnivoro") == 0)
        {
            printf("aguia");
        }
        else
        {
            printf("pomba");
        }
    }
    

    return 0;
}