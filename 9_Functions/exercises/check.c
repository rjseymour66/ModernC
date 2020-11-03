#include <stdio.h>

int check(int x, int y, int n);

int main(void)
{
   printf("%d", check(3, 4, 6));
   printf("\n");
   printf("%d", check(3, 4, 5));
   printf("\n");
   printf("%d", check(3, 4, 2));
   printf("\n");
   printf("%d", check(3, 4, 10));
   printf("\n");

   return 0;
}

int check(int x, int y, int n) {
   return (x >= 0 && x <= (n-1)) && 
          (y >= 0 && y <= (n-1)) ? 1 : 0;
}