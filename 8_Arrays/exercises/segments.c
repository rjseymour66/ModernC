#include <stdio.h>

int main(void)
{
   // const int segments[10][7] = {
   //    { 1, 1, 1, 1, 1, 1, 0 };
   //    { 0, 1, 1, 0, 0, 0, 0 },
   //    { 1, 1, 0, 1, 1, 0, 1 },
   //    { },
   //    {},
   //    {},
   //    {}
   // };

   int test[10][5] = {{0}, {0}, {0}, {0}, {0} };

   int row, column;
   for (row = 0; row < 10; row++){
      for (column = 0; column < 5; column++)
         printf("%d ", test[row][column]);
      printf("\n");
   }


   return 0;
}