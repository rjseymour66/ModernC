/* Asks the user to enter a 2 digit number and then 
   prints the number with its digits reveresed. */

#include <stdio.h>

int main(void)
{
   int num, tens, ones;

   printf("Enter a two-digit number: ");
   scanf("%d", &num);

   ones = num % 10;
   tens = num / 10;

   printf("The reversal is: %d%d\n", ones, tens);
   
   return 0;
}