#include <stdio.h>

void selection_sort(int a[], int n);

int main(void)
{
   int i, a[5] = {0};

   printf("Enter 5 integers: ");

   for (i = 0; i < 5; i++) {
      scanf("%d", &a[i]);
   }

   selection_sort(a, 5);

   for (i = 0; i < 5; i++) {
      printf("%d ", a[i]);
   }

   printf("\n");

   return 0;
}

void selection_sort(int a[], int n) {
   int i, temp;

   if (n == 0) return;

   for (i = 0; i < (n-1); i++) {
      if (a[i] > a[i+1]) {
         temp = a[i+1];
         a[i+1] = a[i];
         a[i] = temp;
      }     
   }
   selection_sort(a, n-1);
}