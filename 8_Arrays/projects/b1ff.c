#include <stdio.h>
#include <ctype.h>

#define SIZE 50

int main(void)
{
   char input[SIZE] = {' '};
   char ch;
   int i = 0;

   printf("Enter message: ");
   while((ch = getchar()) != '\n') {
      input[i++] = ch;
   }

   printf("In B1FF speak: ");

   for(i = 0; i < SIZE; i++) {
      char letter = toupper(input[i]);

      if (letter == 'A')
         letter = '4';
      else if (letter == 'B')
         letter = '8';
      else if (letter == 'E')
         letter = '3';
      else if (letter == 'I')
         letter = '1';
      else if (letter == 'O')
         letter = '0';
      else if (letter == 'S')
         letter = '5';

      printf("%c", letter);
   }
   printf("!!!!!!!!!!\n");
   return 0;
}