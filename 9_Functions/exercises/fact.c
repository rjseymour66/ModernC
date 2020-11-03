#include <stdio.h>

int fact(int n);

int main(void)
{
   printf("%d", fact(5));
   printf("\n");

   return 0;
}

int fact(int n) {
   return n <= 1 ? 1 : n * fact(n - 1);
}