/*
 * =====================================================================================
 *
 *       Filename:  borboletas.c
 *
 *    Description:  1901
 *
 *        Version:  1.0
 *        Created:  14/08/2019 07:58:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campina Grande 
 *
 * =====================================================================================
 */
#include <stdio.h>
void main(){
    int n, i, j,k, p1, p2, count = 0, val;
    scanf("%d", &n);
    int matrix[n][n];
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }




    for (i = 0; i < n*2; i++){
        scanf("%d %d", &p1, &p2);
        val = matrix[p1-1][p2-1];
        if (val != 0){
            count++;
            for(j = 0; j < n; j++){
                for (k = 0; k < n; k++){
                    if(matrix[j][k] == val){
                        matrix[j][k] = 0;
                    }
                }
            }
        }
    }
    printf("%d\n", count);
}
