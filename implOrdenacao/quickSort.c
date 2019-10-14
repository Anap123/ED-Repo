/*
 * =====================================================================================
 *
 *       Filename:  quickSort.c
 *
 *        Version:  1.0
 *        Created:  14/10/2019 12:57:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio (punisher077), arthur.mts@gmail.com
 *   Organization:  IFPB Campina Grande
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int partition(int *v, int i, int f);
void quicksort(int *v, int i, int f);
void swap(int *a, int *b);

void main()
{
    clock_t start, end;
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
    start = clock();

    quicksort(random, 0, 7);
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



void quicksort(int *v, int i, int f){
    if(f > i){
        int p = partition(v, i, f);
        quicksort(v, i, p-1);
        quicksort(v, p+1, f);
    }
}

int partition(int *v, int i, int f){
    int d = i -1, j;
    int p = v[f];
    for(j = i; j < f - 1; j++){
        if(v[j] <= p){
            d++;
            swap(&v[j], &v[d]);
        }
    }
    d++;
    swap(&v[f], &v[d]);
    return d;
}

void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}
