#include <stdio.h>
void main()
{
    int n, i, x, y, cy = 0, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        scanf("%d %d", &x, &y);
        while (cy < y)
        {
            if (x % 2 == 1 ||  x % 2 == -1)
            {
                sum += x;
                cy++;
            }
            x++;
        }
        printf("%d\n", sum);
        sum = cy = 0;
    }
}