#include <stdio.h>

int main(void)
{
   int hours, mins;

   printf("Enter a 24-hour time: ");
   scanf("%d:%d", &hours, &mins);

   if (hours == 24) {
      hours = 12;
      printf("Equivalent 12-hour time: %d:%02d AM\n", hours, mins);
   } else if (hours > 12) {
      hours %= 12;
      printf("Equivalent 12-hour time: %d:%02d PM\n", hours, mins);
   } else
      printf("Equivalent 12-hour time: %d:%02d AM\n", hours, mins);

   return 0;
}