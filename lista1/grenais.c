/*
 * =====================================================================================
 *
 *       Filename:  grenais.c
 *
 *    Description:  1131
 *
 *        Version:  1.0
 *        Created:  10/08/2019 10:38:06
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio 
 *   Organization:  IFPB Campus Camipna Grande
 *
 * =====================================================================================
 */
#include <stdio.h>
void main(){
	int gg, gi, cont, partidas = 1;
	int vg = 0, vi = 0, e = 0;
	while(1){
		scanf("%d %d", &gi, &gg);
		(gi > gg) ? vi++: (gg > gi) ? vg++: e++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &cont);
		if (cont == 2) break;
		partidas++;
	}
	printf("%d grenais\n", partidas);
	printf("Inter:%d\n", vi);
	printf("Gremio:%d\n",vg);
	printf("Empates:%d\n", e);
	if(vi > vg) printf("Inter venceu mais\n");
	else if(vi < vg ) printf("Gremio venceu mais\n");
	else printf("Nao houve vencedor\n");


}
