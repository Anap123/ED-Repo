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
        {
            scanf("%d", &nums[i]);
            mods[i] = nums[i] % m;
        }
        int auxM, auxN;
        for (j = 1; j < n; j++)
        {
            auxM = mods[j];
            auxN = nums[j];
            i = j - 1;
            while (i >= 0 && mods[i] >= auxM)
            {
                if (mods[i] == auxM)
                {
                    if(nums[i]%2 == 0 && auxN%2 == 1){
                        nums[i] = nums[i+1];
                        mods[i] = mods[i+1];
                    }
                }
                else
                {
                    nums[i + 1] = nums[i];
                    mods[i + 1] = mods[i];
                }
                i--;
            }
            nums[i + 1] = auxN;
            mods[i + 1] = auxM;
        }
        for (i = 0; i < n; i++)
            printf("%d\n", nums[i]);
    }
}