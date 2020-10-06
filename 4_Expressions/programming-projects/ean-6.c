/* Asks the user for the first 12 digits of the 
   European Article Number (EAN), then calculates 
   the check digit. */

#include <stdio.h>

int main(void)
{
   int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, first_sum, second_sum, check_digit;
   
   printf("Enter the first 12 digits of an EAN: ");
   scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve);

   first_sum = (two + four + six + eight + ten + twelve);
   second_sum = (one + three + five + seven + nine + eleven);
   first_sum *= 3;
   second_sum += first_sum;
   second_sum -= 1;
   second_sum %= 10;
   check_digit = 9 - second_sum;

   printf("Check digit: %d\n", check_digit);

   return 0;
}