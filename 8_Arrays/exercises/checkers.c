#include <stdio.h>

int main(void)
{
   char checkerboard[8][8] = {};

   int row, column;
   for (row = 0; row < 8; row++) {
      for (column = 0; column < 8; column++){
         if ((row + column) % 2 == 0)
            checkerboard[row][column] = 'B';
         else 
            checkerboard[row][column] = 'R';
      }
   }

   for (row = 0; row < 8; row++){
      for (column = 0; column < 8; column++)
         printf("%c ", checkerboard[row][column]);
      printf("\n");
   }

   return 0;
}