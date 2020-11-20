#include <stdio.h>

#define CUBE(x)         ((x) * (x) * (x))
#define REMAINDER(n)    ((n) % 4)
#define PRODUCT(x, y)   ((x) + (y) < 100 ? 1 : 0)

int main(void)
{
   printf("CUBE:\t\t%d\n", CUBE(2));
   printf("REMAINDER:\t%d\n", REMAINDER(16));
   printf("PRODUCT:\t%d\n", PRODUCT(2, 6));


   return 0;
}