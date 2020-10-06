/* Asks the user to enter an 11-digit UPC number and 
   displays the number in the console. */

#include <stdio.h>

int main(void)
{

   int first, second, third, fourth;

   printf("Enter the UPC number in the following format (1-12345-12345-1): ");
   scanf("%1d-%5d-%5d-%1d", &first, &second, &third, &fourth);
   printf("The number is %d-%d-%d-%d\n", first, second, third, fourth);

   return 0;
}