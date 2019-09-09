/*
 * =====================================================================================
 *
 *       Filename:  teste.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  09/09/2019 18:40:21
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campina Grande 
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <inttypes.h>
typedef struct{
    int addr_soutce, addr_dest;
    uint8_t payload[100];
} Packet;

int main(){
    Packet p = {20,10, { 0 , 0 , 0 , 20 , 30 , 50 , 60 , 79 }};
    for(int i = 0; i < 100; i++){
        printf("Byte %d: %d\n", i, p.payload[i]);
    }
    return 0;
}

