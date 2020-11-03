#include <stdio.h>
#include <stdbool.h>

bool has_zero(int a[], int n);

int main(void)
{
   int a[5] = { 1, 2, 0, 4, 5 };

   printf("%d", has_zero(a, 5));

   printf("\n");

   return 0;
}

bool has_zero(int a[], int n) {
   int i;

   for (i = 0; i < n; i++) {
      if (a[i] == 0)
         return true;
   }
   return false;
}