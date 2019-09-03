#include <stdio.h>
#include <string.h>
#include <stdlib.h>
atoi();
//48 a 57
int isRealNumber(char *x)
{
    int i;
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] < 48 || x[i] > 57)
            return 0;
    }
    return 1;
}

int atol2(char *x)
{
    if (!isRealNumber(x))
        return 0;
    else
    {
        int i, sum = 0, pot = 0;
        for (i = strlen(x) - 1; i >= 0; i--)
        {
            sum += (x[i] - 48) * (int)trunc(pow(10, pot)), pot++;
        }
        return sum;
    }
}
int main()
{
    printf("%d\n", isRealNumber("1234"));

    printf("%d\n", isRealNumber("123a4"));

    printf("%d\n", atol2("jjjj7"));

    printf("%d\n", atol2("12347"));
    return 0;
}