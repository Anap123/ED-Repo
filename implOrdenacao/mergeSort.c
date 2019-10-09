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


void main(){
    clock_t start, end;
    start = clock();
    int random[] = {4,5,61,4,8,31,6432,1000};
    int i;
    mergeSort(random,0, 7);
    end = clock();
    for(i = 0; i < 8; i++) printf("%d ", random[i]);
    printf("\n Tempo de execução: %lf\n", ((double) (end - start)) /CLOCKS_PER_SEC);

}
void mergeSort(int *nums, int ini, int fim){
    if(fim > ini){
        int meio = (ini+fim)/2;
        mergeSort(nums, ini, meio);
        mergeSort(nums, meio + 1, fim);
        merge(nums, ini, fim);
    }
}

void merge(int *nums, int ini, int fim){
    int meio = (ini+fim)/2;
    int aux[(fim - ini + 1)];
    int e = ini, d = meio + 1, k = 0;
    while(e <= meio || d<=fim){
        if(e > meio)
            aux[k++] =  nums[d++];
        else if (d>fim)
            aux[k++] = nums[e++];
        else if (nums[e] < nums[d])
            aux[k++] = nums[e++];
        else
            aux[k++] = nums[d++];
    }
    int i;
    for(i = 0; i < k; i++)
        nums[k] = aux[k - i ];
}
