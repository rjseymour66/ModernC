#include <stdio.h>

int main(void)
{
   int array[5][5] = {};
   int row, column, num, temp_total;


   for (row = 0; row < 5; row++) {
      printf("Enter row %d: \n", row + 1);
      for (column = 0; column < 5; column++) {
         scanf("%d", &num);
         array[row][column] = num;
      }
   }

   // row totals
   printf("Row totals:\t");
   for (row = 0; row < 5; row++) {
      temp_total = 0;
      for (column = 0; column < 5; column++) {
         temp_total += array[row][column];
      }
      printf("%d ", temp_total);
   }

   printf("\n");

   // column totals
   printf("Column totals:\t");
   for (row = 0; row < 5; row++) {
      temp_total = 0;
      for (column = 0; column < 5; column++) {
         temp_total += array[column][row];
      }
      printf("%d ", temp_total);
   }
   printf("\n");

   return 0;
}