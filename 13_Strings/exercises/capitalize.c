#include <stdio.h>
#include <ctype.h>

#define N 100

int capitalize(char str[], int n);

char *pt_capitalize(char *str);

int main(void)
{
   char word[N];

   printf("Enter a word: ");

   pt_capitalize(word);

   printf("%s\n", word);

   return 0;
}

int capitalize(char str[], int n) {
   int i = 0, ch;

   while (i < (n - 1) && (ch = getchar()) != '\n') {
      if (isalpha(ch))
         str[i++] = toupper(ch);
      else 
         str[i++] = ch;
   }
   
   str[i] = '\0';
   return i;
}

char *pt_capitalize(char *str)  {

   char *ch = str;

   while (*ch != '\n'){
      if (isalpha(*ch))
         toupper(*ch);
      ch++;
   }
   *ch = '\0';
   return str;
}