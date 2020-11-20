#include <stdio.h>

#define N 5

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
   double a[N] = { 2, 4, 6, 8, 10 }, avg, sum;

   avg_sum(a, N, &avg, &sum);

   printf("avg: %.2f\n", avg);
   printf("sum: %.2f\n", sum);
   

   return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum) {
   int i;

   for (i = 0; i < n; i++)
      *sum += a[i];
   *avg = *sum / n;
}