#include <stdio.h>
#include <stdbool.h>


int main(void)
{
   bool digit_seen[10] = {false};
   bool dupes[10] = {false};
   int digit, count = 0;
   long n;

   printf("Enter a number: ");
   scanf("%ld", &n);

   while (n > 0) {
      digit = n % 10;
      if (digit_seen[digit] == true) {
         dupes[digit] = true;
         count++;
      }
      digit_seen[digit] = true;
      n /= 10;
   }

   int i;

   if (count > 0) {
      printf("Repeated digit(s): ");
      for (i = 0; i < 10; i++) {
         if (dupes[i] == true){
            printf("%d ", i);
            count++;
         }
      }
      printf("\n");
   } else 
      printf("No repeated digit\n");
   
   return 0;
}