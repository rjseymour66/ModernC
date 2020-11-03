#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main(void)
{

   double a[3] = { 2, 4, 6 };
   double b[3] = { 1, 3, 5 };

   printf("%.2f", inner_product(a, b, 3));
   printf("\n");

   return 0;
}

double inner_product(double a[], double b[], int n) {
   int i;
   double sum = 0;
   for(i = 0; i < n; i++) {
      sum += a[i] * b[i];
   }
   return sum;
}