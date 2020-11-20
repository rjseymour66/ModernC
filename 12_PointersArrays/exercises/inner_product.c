#include <stdio.h>

#define N 5

double inner_product(const double *a, const double *b, int n);

int main(void)
{

   double a[N] = { 1.0, 2.0, 3.0, 4.0, 5.0 }, b[N] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

   printf("%d\n", inner_product(&a, &b, 5));

   return 0;
}

double inner_product(const double *a, const double *b, int n) {
   double product, *p, *q;

   for (p = a; p < a + n; p++)
      for (q = b; q < b + n; q++)
         product += (*p * *q);
}