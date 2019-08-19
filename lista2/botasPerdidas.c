#include <stdio.h>
void main()
{
    int n, i, count, numC, sideC, j;
    while (scanf("%d", &n) != EOF)
    {
        int nums[n];
        char sides[n];
        count = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d ", &nums[i]);
            sides[i] = getchar();
        }
        for (i = 0; i < n; i++)
        {
            numC = nums[i];
            sideC = sides[i];
            if (sideC != 'V')
            {
                for (j = i + 1; j < n; j++)
                {
                    if (numC == nums[j] && (sideC != sides[j]) && sides[j] != 'V')
                    {
                        count++;
                        sides[j] = 'V';
                        break;
                    }
                }
            }
        }
        printf("%d\n", count);
    }
}