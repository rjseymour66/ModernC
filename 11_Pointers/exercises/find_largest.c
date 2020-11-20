#include <stdio.h>

#define N 10

int *find_largest(int a[], int n);

int main(void)
{
   int i, *largest, a[N] = { 2, 5, 7, 44, 2, 34, 12, 56, 81, 100 };

   printf("pointer:\t%p\n", find_largest(a, N));
   printf("largest:\t\t%d\n", *find_largest(a, N));

   for(i = 0; i < N; i++) {
      printf("%d: %d\t%p\n", i, a[i], &a[i]);
   }

   largest = find_largest(a[3], 4);


   return 0;
}

int *find_largest(int a[], int n) {
   int i, *p = &a[0];

   for (i = 0; i < n; i++) {
      if (a[i] > *p) 
         p = &a[i];
   }
   return p;
}