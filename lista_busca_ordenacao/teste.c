#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main () {
   int a = -12;
   int b = a & 1;
   printf("%d %d\n", a & 2, b);
}