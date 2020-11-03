#include <stdio.h>

int main(void)
{
   int n, i, square;

   printf("Enter an integer: ");
   scanf("%d", &n);

   for (i = 1; square < n; i++) {
      square = i * i;

      if (square % 2 == 0)
         printf("%d\n", i * i);
   }

   return 0;
}