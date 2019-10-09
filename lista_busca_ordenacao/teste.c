#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   printf("%d %d\n", ret, haystack);

      printf("%s\n", haystack);

   return(0);
}