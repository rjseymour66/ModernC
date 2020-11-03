#include <stdio.h>

int main(void)
{
   int numerator, denominator, remainder;

   printf("Enter a fraction: ");
   scanf("%d/%d", &numerator, &denominator);

      if (numerator < denominator){
      remainder = numerator;
      numerator = denominator;
      denominator = remainder;
   }
      
   while (denominator != 0) {
      remainder = numerator % denominator;
      numerator = denominator;
      denominator = remainder;
   }

   printf("In lowest terms: %d/%d\n", (numerator / denominator), (denominator / denominator));

   return 0;
}