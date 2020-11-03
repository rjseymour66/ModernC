#include <stdio.h>

int main(void)
{
   float entry, largest = 0;

   for (; entry != 0 || entry > 0; ) {
      printf("Enter a number: ");
      scanf("%f", &entry);

      if (entry > largest)
         largest = entry;
   }

   printf("The largest number entered was %.2f\n", largest);



   return 0;
}