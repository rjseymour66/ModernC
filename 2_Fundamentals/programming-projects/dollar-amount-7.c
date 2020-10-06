/* Asks the user to enter a US dollar amount 
   and then shows how to pay the amount using
   the smallest number of $20, $10, $5, and 
   $1 bills. */

#include <stdio.h>

int main(void)
{

   int dollars, twenties, tens, fives, ones;

   printf("Enter a dollar amount: ");
   scanf("%d", &dollars);

   // how many 20s?
   twenties = dollars / 20;
   dollars = dollars - (twenties * 20);

   // how many 10s?
   tens = dollars / 10;
   dollars = dollars - (tens * 10);

   // how many 5s?
   fives = dollars / 5;
   dollars = dollars - (fives * 5);

   //how many 1s?
   ones = dollars / 1;
   dollars = dollars - (ones * 1);

   printf("$20 bills:\t%d\n", twenties);
   printf("$10 bills:\t%d\n", tens);
   printf("$5 bills:\t%d\n", fives);
   printf("$1 bills:\t%d\n", ones);


   return 0;
}