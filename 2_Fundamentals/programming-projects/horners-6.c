/* Asks the user for input and then calculates the
   value of a polynomial using Horner's Rule. */

#include <stdio.h>

int main(void)
{
   int x;

   printf("Please enter a value for x: ");
   scanf("%d", &x);

   printf("The answer is: %d\n", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

   return 0;
}