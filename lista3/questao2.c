#include <stdio.h>

char *strrchr2(char *str, char c)
{
    int i;
    char *loca =NULL;
    for (i = 0; str[i] != '\0'; i++) if (str[i] == c) loca = &str[i];
    return loca;
}
void main()
{
    char *pointer = strrchr2("aaaaas", 's');
    printf("%p aponta para %c\n", pointer, *pointer);

    pointer = strrchr2("aaaaas", 'a');
    printf("%p aponta para %c\n", pointer, *pointer);

    // Retorna nulo!
    pointer = strrchr2("aaas", 'c');
    printf("%p\n", pointer);
}
