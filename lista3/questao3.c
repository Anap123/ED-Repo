#include <stdio.h>

int pali(char str[], int in, int fim)
{
    if (fim - in == 1)
    {
    }
    if (str[fim] == str[in] && pali(str, in - 1, fim - 1))
        return 1;
    else
        return 0;
}
void main()
{
}