#include <stdio.h>

#define NUM_ROWS 10
#define NUM_COLUMNS 10

int main(void)
{
   int i, rows, cols, a[NUM_ROWS][NUM_COLUMNS], *p;

   for(p = &a[0][0]; p <= &a[NUM_ROWS - 1][NUM_COLUMNS - 1]; p++)
      *p = 0;

   for (rows = 0; rows < NUM_ROWS; rows++){
      for (cols = 0; cols < NUM_COLUMNS; cols++) {
         printf("%d", a[rows][cols]);
      }
      printf("\n");
   }
      
      

   return 0;
}