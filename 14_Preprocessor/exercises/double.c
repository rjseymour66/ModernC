#include <stdio.h>

#define DOUBLE(x)  (2 * (x))

int main(int argc, char **argv)
{
   int x = 4;

   printf("DOUBLE:\t%d\n", DOUBLE(1 + 2));
   printf("DOUBLE:\t%d\n", 4 / DOUBLE(2));
   printf("DOUBLE:\t%d\n", DOUBLE(2));

   return 0;
}