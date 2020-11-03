#include <stdio.h>

#define SIZE 40

int main(void)
{
   int i;
   int fib_numbers[SIZE] = { 0, 1 };

   for (i = 2; i < SIZE; i++){
      fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
   }

   for (i = 0; i < SIZE; i++){
      printf("%d ", fib_numbers[i]);
   }

   printf("\n");
   return 0;
}