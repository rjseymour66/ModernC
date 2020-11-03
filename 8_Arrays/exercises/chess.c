#include <stdio.h>

int main(void)
{
   char chessboard[8][8] = {
      { 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' },
      { 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
      { ' ', '.', ' ', '.', ' ', '.', ' ', '.' },
      { '.', ' ', '.', ' ', '.', ' ', '.', ' ' },
      { ' ', '.', ' ', '.', ' ', '.', ' ', '.' },
      { '.', ' ', '.', ' ', '.', ' ', '.', ' ' },
      { 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
      { 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' }
   };

   int row, column;
   for (row = 0; row < 8; row++){
      for (column = 0; column < 8; column++)
         printf("%c ", chessboard[row][column]);
      printf("\n");
   }
   return 0;
}