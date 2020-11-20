#include <stdio.h>

int main(void)
{
   int a[5] = { 0, 1, 2, 3, 4 };
   int *low = &a[0], *high = &a[4], *middle;

   printf("high:\t%d\n", *high);
   printf("low:\t%d\n", *low);
   middle = low + (high - low) / 2;
   printf("mid:\t%d\n", *middle);

   int *p = &a[0];

   printf("%d\n", *p++);
   printf("%d\n", *p++);
   printf("%d\n", *p++);
   printf("%d\n", *p++);
   printf("%d\n", *p);
   

   return 0;
}