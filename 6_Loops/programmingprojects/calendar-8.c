#include <stdio.h>

int main(void)
{
   int i, days, start_day_number;

   printf("Enter the number of days in month: ");
   scanf("%d", &days);

   printf("Enter starting day of the week (1=Sun, 7=Sat): ");
   scanf("%d", &start_day_number);  

   for (i = 1; i < start_day_number; i++) {
      printf("   ");
   }
    

   for (i = 1; i <= days; i++) {
      printf("%3d", i);

      if ((start_day_number + i - 1) % 7 == 0)
         printf("\n");
   }
   
   printf("\n");

   return 0;
}