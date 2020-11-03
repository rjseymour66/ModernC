#include <stdio.h>

int digit(int n, int k);

int main(void)
{
   printf("%d", digit(8258349, 8));
   printf("\n");

   return 0;
}

int digit(int n, int k){
   int digit;

   while (k-- > 0) {
      digit = n % 10;
      n /= 10;
   }
   return digit;
}