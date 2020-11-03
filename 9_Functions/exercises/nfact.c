#include <stdio.h>

int fact(int n);

int main(void)
{
   printf("%d", fact(5));
   printf("\n");

   return 0;
}

int fact(int n) {
   int product = 1;

   while (n >= 1) {
      product *= n;
      n--;
   }
   return product;
}