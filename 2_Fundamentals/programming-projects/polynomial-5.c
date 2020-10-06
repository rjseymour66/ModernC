/* Asks the user for input and then calculates the
   value of a polynomial. */

#include <stdio.h>

int main(void)
{
   int x;

   printf("Please enter a value for x: ");
   scanf("%d", &x);

   printf(
   "The answer is: %d\n", 
   (3 * (x * x * x * x * x)) + 
   (2 * (x * x * x * x)) - 
   (5 * (x * x * x)) - 
   (x * x) + 
   (7 * x) - 
   6 );


   return 0;
}