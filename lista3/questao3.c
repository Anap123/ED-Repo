#include <stdio.h>

int pali(char str[], int ini, int fim)
{
  if(fim == ini)
      return 1;
  if(fim - ini == 1)
     return str[fim] == str[ini];
   else
     return (str[fim]==str[ini] && (pali(str, ini+1, fim-1)));
}
void main()
{
  printf("%d\n",pali("aaa", 0, 2));

  printf("%d\n", pali("arthur", 0 ,5));
}