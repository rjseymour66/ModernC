#include <stdio.h>

int main(void)
{

   int i, j, k;
   
   i = 2;
   j = 1;
   printf("%d\n", (!!i) < (!j));

   return 0;
}