#include <stdio.h>

#define MONTH 30
#define HOURS 24

int main(void)
{
   int sum = 0, avg_temp = 0;
   int temp[MONTH][HOURS] = { };

   int row, column;
   for (row = 0; row < MONTH; row++){
      for (column = 0; column < HOURS; column++)
         sum += temp[row][column];
   }

   avg_temp = sum / (MONTH / HOURS);


   return 0;
}