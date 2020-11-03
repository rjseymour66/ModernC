#include <stdio.h>
#include <stdbool.h>

// #define true 1
// #define false 0
#define SIZE 7

int main(void)
{
   bool a[SIZE] = { [0] = true, false, [6] = true };

   int i;
   for (i = 0; i < SIZE; i++) {
      printf("%d ", a[i]);
   }

   printf("\n");

   return 0;
}