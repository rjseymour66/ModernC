/* Ask the user for a dollar and cents amount,
   then calculate the total amount using a 5%
   tax rate. */

#include <stdio.h>

#define TAX 0.05

int main(void) {

   float amount;

   printf("Enter an amount: ");
   scanf("%f", &amount);

   printf("With tax added:  %.2f\n", amount + (amount * TAX));

   return 0;
}