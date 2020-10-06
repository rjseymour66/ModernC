/* Asks the user to enter a 3 digit number and then 
   prints the number with its digits reveresed. */

#include <stdio.h>

int main(void)
{
   int num, ones, tens, hundreds;

   printf("Enter a three-digit number: ");
   scanf("%d", &num);

   ones = num % 10;
   hundreds = num / 100;
   tens = (num / 10) % 10;

   printf("The reversal is: %d%d%d\n", ones, tens, hundreds);


   return 0;
}