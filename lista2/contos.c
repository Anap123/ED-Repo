#include <stdio.h>
#include <string.h>
void main()
{
    int n, l, c;
    char pal[71];
    int countPag, countLinhas, countChars, i;
    while (scanf("%d %d %d", &n, &l, &c)!=EOF)
    {

        countChars = countLinhas = countPag = 0;

        for (i = 1; i <= n; i++)
        {
            scanf("%s", pal);
            countChars += strlen(pal);

            if (countChars > c)
            {
                countLinhas++;
                countChars = strlen(pal) + 1;
            }
            else if (countChars == c)
            {
                countLinhas++;
                countChars = 0;
            }
            else if (i < n)
            {
                countChars++;

                if (countChars == c)
                {
                    countChars = 0;
                    countLinhas++;
                }
            }

            if (countLinhas == l)
            {
                countLinhas = 0;
                countPag++;
            }
        }
        if (countLinhas > 0 || countChars > 0)
            countPag++;
        printf("%d\n", countPag);
    }
}