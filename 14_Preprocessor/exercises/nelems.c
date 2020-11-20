#include <stdio.h>

#define NELEMS(a)    (sizeof(a) / sizeof(a[0]))

int main(void)
{
   int array[5] = { 1, 2, 3, 4, 5 };
   printf("Number of elements:\t%lu\n", NELEMS(array));

   return 0;
}