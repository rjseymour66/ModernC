/* Asks the user for a date in a mm/dd/yyyy format 
   and displays it in yyyymmdd format */

#include <stdio.h>

int main(void)
{
   int month, day, year;
   printf("Enter a date (mm/dd/yyyy): ");
   scanf("%d/%d/%d", &month, &day, &year);
   printf("You entered the date %4d%02d%02d\n", year, month, day);

   return 0;
}