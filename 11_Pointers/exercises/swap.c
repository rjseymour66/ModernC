#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
   int a = 4, b = 5;

   swap(&a, &b);

   printf("a: %d\n", a);
   printf("b: %d\n", b);

   return 0;
}

void swap(int *p, int *q) {
   int temp = *p;
   *p = *q;
   *q = temp;
}