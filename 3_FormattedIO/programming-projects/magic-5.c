/* Asks the user for input and creates a magic square with 
   that input. */

#include <stdio.h>

int main(void)
{
   int one, two, three, four, five, six, sev, eight, nine, ten, ele, twel, thir, fourteen, fif, sixteen;
   
   printf("Enter the numbers from 1 to 16 in any order: ");
   scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six, &sev, &eight, &nine, &ten, &ele, &twel, &thir, &fourteen, &fif, &sixteen);
   printf("%2d %2d %2d %2d\n", one, two, three, four);
   printf("%2d %2d %2d %2d\n", five, six, sev, eight);
   printf("%2d %2d %2d %2d\n", nine, ten, ele, twel);
   printf("%2d %2d %2d %2d\n", thir, fourteen, fif, sixteen);

   printf("Row sums: %d %d %d %d\n", (one + two + three + four), (five + six + sev + eight), (nine + ten + ele + twel), (thir + fourteen + fif + sixteen));
   printf("Column sums: %d %d %d %d\n", (one + five + nine + thir), (two + six + ten + fourteen), (three + sev + ele + fif), (four + eight + twel + sixteen));
   printf("Diagnal sums: %d %d\n", (one + six + ele + sixteen), (four + sev + ten + thir));

   return 0;
}