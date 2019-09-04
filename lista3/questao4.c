#include <stdio.h>
//Fatorial recutsiva
int fatorialRec(int n)
{
    if (n == 1)
        return 1;
    else
        return n * fatorialRec(n - 1);
}

//Fatorial iterativa
int fatorialIt(int n)
{
    int i, res = 1;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

//Calculo do seno iterativo
double senoIt(double x, int qt)
{
    int i, t = 1;
    double res = 0;
    for (i = 1; i <= qt; i++)
    {
        res = (i % 2 == 0) ? res + pow(x, t) / fatorialIt(t) : res - pow(x, t) / fatorialIt(t);
        t += 2;
    }
    return res;
}
//Calculo do seno recursivamente
double senoRec(double x, int qt)
{
    int t = qt * 2 - 1;
    if (qt == 1)
        return 1;
    else if (qt % 2 == 0)
        return senoRec(x, qt - 1) - (pow(x, t) / fatorialRec(t));
    else
        return senoRec(x, qt - 1) + (pow(x, t) / fatorialRec(t));
}

void main()
{
    printf("%d\n", fatorialRec(4));

    printf("%d\n", fatorialIt(4));

    printf("%lf\n", senoIt(3.14, 3));

    printf("%lf\n", senoRec(3.14, 7));
}