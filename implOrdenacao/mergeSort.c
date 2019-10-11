/*
 * =====================================================================================
 *
 *       Filename:  mergeSort.c
 *
 *    Description:  Implementação do algoritmo de ordenação
 *    Merge Sort
 *
 *        Version:  1.0
 *        Created:  09/10/2019 17:05:18
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

void mergeSort(int *nums, int ini, int fim);
void merge(int *nums, int ini, int fim);

void main()
{
    clock_t start, end;
    start = clock();
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
    mergeSort(random, 0, 8);
    end = clock();
    printf("Merge sort:\n[ ");
    for (i = 0; i < 8; i++)
        if (i < 7)
            printf("%d, ", random[i]);
        else
            printf("%d", random[i]);
    printf("]\n");
    printf("Tempo de execução: %lf\n", ((double)(end - start)) / CLOCKS_PER_SEC);
}

void mergeSort(int *nums, int i, int f)
{
    if (f > i)
    {
        int meio = (i + f) / 2;
        mergeSort(nums, i, meio);
        mergeSort(nums, meio + 1, f);
        merge(nums, i, f);
    }
}

void merge(int *nums, int i, int f)
{
    int m = (i + f) / 2;
    int e = i, d = m + 1, k = 0, tam = f - i + 1;
    int *aux = (int*)malloc(tam * sizeof(int));
    while (e <= m || d <= f)
    {
        if (e > m)
            aux[k++] = nums[d++];

        else if (d > f)
            aux[k++] = nums[e++];

        else if (nums[e] < nums[d])
            aux[k++] = nums[e++];

        else
            aux[k++] = nums[d++];
    }

    for (k = i; k < f; k++)
    {
        nums[k] = aux[k - i];
    }
    free(aux);
}
