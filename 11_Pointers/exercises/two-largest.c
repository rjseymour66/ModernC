#include <stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{

   int a[N] = { 2, 5, 7, 44, 2, 34, 12, 56, 81, 100 }, largest, second_largest;

   find_two_largest(a, N, &largest, &second_largest);

   printf("largest:\t%d\n", largest);
   printf("second:\t\t%d\n", second_largest);

   return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
   *largest = *second_largest = 0;
   int i;

   for (i = 0; i < n; i++) {
      if (a[i] > *largest)
         *largest = a[i];
   }

   for (i = 0; i < n; i++) {
      if (a[i] < *largest && a[i] > *second_largest)
         *second_largest = a[i];
   }
}