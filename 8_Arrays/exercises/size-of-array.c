#include <stdio.h>
#include <string.h>

#define SIZE ((int) (sizeof(a) / sizeof(a[0])))

int main(void)
{

   int a[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
   int b[10] = { 0 };

   int i;
   for (i = 0; i < SIZE; i++) {
      printf("array a: %d\n", a[i]);
      printf("array b: %d\n\n", b[i]);
   }

   memcpy(b, a, sizeof(a));

   for (i = 0; i < SIZE; i++) {
      printf("array a: %d\n", a[i]);
      printf("array b: %d\n\n", b[i]);
   }

   // int i;
   // int a[10] = { 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };

   // printf("size of array: %ld\n", sizeof(a));

   // for (i = 0; i < 10; i++)
   //    printf("%d ", a[i]);

   // printf("\n");

   // for (i = 0; i < SIZE; i++)
   //    a[i] = 0;

   // for (i = 0; i < 10; i++)
   //    printf("%d ", a[i]);
   
   // printf("\n");

   return 0;
}