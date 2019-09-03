#include <stdio.h>

int *strrchr2(char *str, char c)
{
    int i, *loca = NULL;
    for (i = 0; str[i] != '\0'; i++) if (str[i] == c) loca = &str[i];
    return loca;
}
void main()
{
    int *pointer = strrchr2("aaaaas", 's');
    printf("%p aponta para %c\n", pointer, *pointer);

    // Retorna nulo!
    pointer = strrchr2("aaas", 'c');
    printf("%p", pointer);
}