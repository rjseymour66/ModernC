#include <stdio.h>

int main(void)
{
   int c, char_count = 0, word_count = 1;
   printf("Enter a sentence: ");

   while ((c = getchar()) != '\n') {
      if (c == ' ')
         word_count++;
      else 
         char_count++;
   }
   printf("char: %d\n", char_count);
   printf("words: %d\n", word_count);

   printf("Average word length: %.1f\n", (float) char_count / word_count);

   return 0;
}