/*
 * =====================================================================================
 *
 *       Filename:  insertionSort.c
 *
 *    Description:  Implementação do algoritmo de ordenação
 *    Insertion Sort
 *
 *        Version:  1.0
 *        Created:  09/10/2019 16:55:22
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio (punisher077), arthur.mts@gmail.com
 *   Organization:  IFPB Campina Grande
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void insertionSort(int *nums, int len);

void main()
{
    // Testando algoritmo
    int random[] = {4, 5, 61, 4, 8, 31, 6432, 1000};
    int i;
    printf("Lista origninal:\n[ ");
    for (i = 0; i < 8; i++)
    {
        if (i < 7)
            printf("%d, ", random[i]);
        else
            printf("%d", random[i]);
    }
    printf("]\n");
    clock_t start, end;
    start = clock();
    insertionSort(random, 8);
    end = clock();
    printf("Insertion sort:\n[ ");
    for (i = 0; i < 8; i++)
        if (i < 7)
            printf("%d, ", random[i]);
        else
            printf("%d", random[i]);
    printf("]\n");
    printf("Tempo de execução: %lf\n", ((double)(end - start)) / CLOCKS_PER_SEC);
}

void insertionSort(int *nums, int len)
{
    int i, j, key;
    for (i = 1; i < len; i++)
    {
        key = nums[i];
        j = i - 1;
        while (j >= 0 && nums[j] > key)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }
}