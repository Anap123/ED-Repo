#include <stdio.h>
//3.1
//Palindromo
int pali(char str[], int ini, int fim)
{
    if (fim == ini)
        return 1;
    if (fim - ini == 1)
        return str[fim] == str[ini];
    else
    {
        return (str[fim] == str[ini] && (pali(str, ini + 1, fim - 1)));
    }
}
//3.2
//Sequência
long seq(int n)
{
    if (n < 2)
        return 2;
    else
        return seq(n - 1) * seq(n - 2);
}
//3.3
// Soma de N cubos
int somaCubos(int n){
    if(n==1) return 1;
    else return (n*n*n) + somaCubos(n-1);
}
void main()
{
    int i, n;
    // Testes da função palindromo
    printf("aaa: %d\n", pali("aaa", 0, 2));

    printf("arthur: %d\n", pali("arthur", 0, 5));
    // Teste da função sequência
    
    for (i = 1; i <= 10; i++)
        printf("%ld\n", seq(i));

    // Teste da função Soma de N cubos
    printf("Digite um número:");
    scanf("%d", &n);
    printf("Soma dos primeiros %d cubos: %d\n", n, somaCubos(n));
    
}