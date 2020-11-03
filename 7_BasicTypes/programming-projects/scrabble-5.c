#include <stdio.h>
#include <ctype.h>

int main(void)
{
   int c, value = 0;

   printf("Enter a word: ");

   while ((c = getchar()) != '\n') {

      c = toupper(c);

      if (c == 'A' || c == 'E' || c == 'I' || c == 'L' || c == 'N' || c == 'O' || c == 'R'
      || c == 'S'|| c == 'T'|| c == 'U') 
         value += 1;
      else if (c == 'D' || c == 'G')
         value += 2;
      else if (c == 'B' || c == 'C' || c == 'M' || c == 'P' )
         value += 3;
      else if (c == 'F' || c == 'H' || c == 'V' || c == 'W' || c == 'Y') 
         value += 4;
      else if (c == 'K')
         value += 5;
      else if (c == 'J' || c == 'X') 
         value += 8;
      else if (c == 'Q' || c == 'Z')
         value += 10;
   }

   printf("Scrabble value: %d\n", value);

   return 0;
}