#include <stdio.h>
#include <stdbool.h>


int main(void)
{
   bool digit_seen[10] = {false};
   int i, digit;
   long n;

   printf("Enter a number: ");
   scanf("%ld", &n);

   while (n > 0) {

      while (n > 0) {
         digit = n % 10;
         if (digit_seen[digit])
            break;
         digit_seen[digit] = true;
         n /= 10;
      }

   if (n > 0) 
      printf("Repeated digit\n");
   else 
      printf("No repeated digit\n"); 

   printf("Enter a number: ");
   scanf("%ld", &n);

   for (i = 0; i < 10; i++)
      digit_seen[i] = false;
   }
   return 0;
}