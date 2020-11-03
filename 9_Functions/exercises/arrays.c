#include <stdio.h>


int largest_element(int n, int array[n]);
int average(int n, int array[n]);
int num_positives(int n, int array[n]);

int main(void)
{
   int a[5] = { 8, 22, 14, 11, 9 };
   printf("%d", largest_element(5, a));
   printf("\n");

   int b[5] = { 10, 2, 3, 5, 5 };
   printf("%d", average(5, b));
   printf("\n");

   int c[5] = { -10, 2, -3, 5, 5 };
   printf("%d", num_positives(5, c));
   printf("\n");


   return 0;
}

int largest_element(int n, int array[n]) {
   int largest, i;
   largest = array[0];
   for(i = 0; i < n; i++) {
      if (array[i] > largest)
         largest = array[i];
   }
   return largest;
}

int average(int n, int array[n]) {
   int i, sum = 0;
   for (i = 0; i < n; i++) {
      sum += array[i];
   }
   return sum / n;
}

int num_positives(int n, int array[n]) {
   int i, count = 0;
   for (i = 0; i < n; i++) {
      if (array[i] > 0)
         count++;
   }
   return count;
}