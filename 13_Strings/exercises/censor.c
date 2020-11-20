#include <stdio.h>

#define N 25

int censor(char str[], int n);

char *pointer(char *str);

int main(void)
{
   char word[N];

   printf("Enter a word: ");
   scanf("%s", word);

   printf("%s\n", word);

   return 0;
}

int censor(char str[], int n) {
   int i = 0, ch, count = 0;

   while (i < n && (ch = getchar()) != '\n') {
      str[i++] = ch;
   }
   
   str[i] = '\0';
   return i;
}

char *pointer(char *str) {
   char *pt = str;
   int counter = 0;

   while (*pt != '\n') 
      *pt = *str;
   pt++;

   *pt = '\0';
   return str;
}