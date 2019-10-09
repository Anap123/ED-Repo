/*
 * =====================================================================================
 *
 *       Filename:  sortesq.c
 *
     *    Description:  Sort! Sort!! e Sort!!
 *
 *        Version:  1.0
 *        Created:  08/10/2019 16:44:54
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
int *m;
int compare(const void *a, const void *b){
    int *va = (int*)a;
    int *vb = (int*)b;      
    printf("%d\n", *m);
    if((*va % *m) > (*vb % *m))
        return -1;
    
    // else if(*va % m < *vb % m)
    else return 1;
    // else{
    //     if(*va %2 != *vb %2)
    //         return (*va % 2 == 1 ? 1 : -1);
    //     else if (*va%2 == 0)
    //         return (*va > *vb ? 1 : -1);
    //     else
    //         return (*va < *vb ? -1 : 1);
    // }


}


void main(){
    int n;
    while(1){
        scanf("%d %d", &n, m);
        if(n == 0 && *m == 0) break;
        int nums[n], i;
        for(i = 0; i < n; i++) scanf("%d", &nums[i]);
        qsort(nums, n, sizeof(int), compare);
        printf("%d %d\n", n, *m);
        for(i = 0; i < n; i++) printf("%d\n", nums[i]);
    }
}

