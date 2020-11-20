#include <stdio.h>
#include <string.h>

#define TOUPPER(c)      ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))

int main(void)
{
   char s[10];
   int i = 0;
   char x = putchar(TOUPPER(s[++i]));

   printf("%s\n", strcpy(s, "0123"));
   putchar(TOUPPER(s[++i]));
   

   return 0;
}