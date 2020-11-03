#include <stdio.h>

int main(void)
{
   int c, count = 0;

   printf("Enter a sentence: ");

   while((c = getchar()) != '\n') {
      if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' ||
          c == 'o' || c == 'O' || c == 'u' || c == 'U')
          count++;
   }

   printf("Your sentence contains %d vowels.\n", count);

   return 0;
}