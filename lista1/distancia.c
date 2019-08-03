#include<stdio.h>
#include<math.h>

void main(){
	float x1, x2, y1, y2;
	double res;
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	res = sqrt(
	pow((x2-x1),2) + pow((y2-y1),2)
	);
	
	printf("%.4lf\n", res);
}
