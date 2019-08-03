#include <stdio.h>
#include <math.h>
void main()
{
    int a = 1, count = 0, baixo = 2;
    double s = 1;

    while (a <= 39)
    {
        a++;
        if (a % 2 == 1)
        {
            count++;
            printf("%d/%d\n", a, baixo);
            s += (double) a / (double) baixo;
            baixo *= 2;
        }
    }
    printf("%.2lf", s);
}