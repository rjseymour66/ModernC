#include <stdio.h>

#define N 5

int sum_array(const int a[], int n);

int main(void)
{
   int a[N] = { 1, 2, 3, 4, 5 };

   printf("sum: %d\n", sum_array(a, N));

   return 0;
}

int sum_array(const int a[], int n) {
   int sum = 0, *p;

   for (p = a; p < a + n; p++)
      sum += *p;
   return sum;
}