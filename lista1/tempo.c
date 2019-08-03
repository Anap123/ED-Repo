#include<stdio.h>
void main(){
	int seg;
	scanf("%d",&seg);
	printf("%d:%d:%d\n", (seg/60/60),((seg/60)%60),(seg%60) );
}