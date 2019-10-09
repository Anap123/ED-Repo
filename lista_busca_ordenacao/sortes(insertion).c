/*
 * =====================================================================================
 *
 *       Filename:  sortes.c
 *
 *    Description:  Sort! Sort!! e Sort!!!  1252
 *
 *        Version:  1.0
 *        Created:  02/10/2019 20:51:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio (punisher077), arthur.mts@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

int compare(int a, int b, int mod){
    if(a % mod > b % mod){
        return 1;
    }
    else if(a % mod == b % mod){
        if(a % 2 == b % 2){
            if(a % 2 == 0) return a > b;
            else return a < b;
        }
        else return (b % 2 == 1);
    }
    else return 0;
}
void main()
{
    int n, m, i, j;
    while (1)
    {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0)
            break;
        int nums[n], mods[n];
        for (i = 0; i < n; i++)
            scanf("%d", &nums[i]);

        int j, aux;
        for (i = 1; i < n; i++)
        {
            j = i - 1;
            aux = nums[i];
            while (j >= 0 && compare(nums[j], aux, m)) // if (nums[j] > aux) == (a > b) 3 > 9
            {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = aux;
        }
        printf("%d %d\n", n, m);
        for (i = 0; i < n; i++)
            printf("%d\n", nums[i]);
    }
}