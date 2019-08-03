#include <stdio.h>
void main()
{
    long n, min, parada = 0, cont = 0;
    while (scanf("%llu", &n) != EOF)
    {
        if (cont == 0)
        {
            min = n + 1;
        }
        else if (!parada)
        {
            if (n < min)
            {
                parada = 1;
            }
            else
            {
                min = n + 1;
            }
        }
        cont++;
    }
    printf("%lu\n", min);
}