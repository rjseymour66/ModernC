#include <stdio.h>

#define AVG(x,y)     (((x) + (y)) / 2)
#define AREA(x,y)    ((x) * (y))

int main(void)
{

   printf("AVG:\t%d\n", AVG(3, 5));
   printf("AREA:\t%d\n", AREA(3, AREA(3, 4)));

   return 0;
}