#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(void)
{
   int a[5] = { 2, 4, 6, 8, 10 };

   printf("Answer: %d\n", search(a, 5, 8));

   return 0;
}

bool search(const int a[], int n, int key) {
   int *p;

   for (p = a; p < a + n; p++){
      if (*p == key)
         return true;
   }
   return false;
}