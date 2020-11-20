#include <stdio.h>

void store_zeros(int a[], int n);

int main(void)
{

   int i, a[5] = { 1, 2, 3, 4, 5 };

   for (i = 0; i < 5; i++)
      printf("%d ", a[i]);

   printf("\n");

   store_zeros(a, 5);

   for (i = 0; i < 5; i++)
      printf("%d ", a[i]);

   printf("\n");
   
   return 0;
}

void store_zeros(int a[], int n) {
   int *p;

   for (p = a; p < a + n; p++)
      *p = 0;
}