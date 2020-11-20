#include <stdio.h>
#include <string.h>

#define SENT_LEN 25

int read_line(char str[], int n);

int main(void)
{
   char str[] = "Are we having fun yet?", sentence[SENT_LEN + 1] = "";
   char str2[SENT_LEN + 1];
   
   printf("%s\n", str);
   printf("%15.6s\n", str);
   puts(str);

   printf("Enter a sentence: ");
   // scanf("%s", sentence);
   // gets(sentence);
   read_line(sentence, SENT_LEN + 1);
   printf("%s\n", sentence);

   printf("Copy: %s\n", strcpy(str2, sentence));

   printf("Length: %ld\n", strlen(str2));

   printf("**************************");
   printf("%c", '\n');
   printf("**************************");
   putchar("\n");


   return 0;
}

int read_line(char str[], int n) {
   int ch, i = 0;

   while ((ch = getchar()) != '\n')
      if (i < n)
         str[i++] = ch;
   str[i] = '\0';
   return i;
}