#include <stdio.h>
#include <ctype.h>

#define N 10

int read_line(char str[], int n);

int main(void)
{
   char s[N];

   read_line(s, N);

   printf("%s\n", s);

   return 0;
}

int read_line(char str[], int n) {

   int ch, i;

   while (isspace(getchar()))
      ;

    while (i < n && (ch = getchar()) != '\n' && !isspace(ch))
        str[i++] = ch;
    if (ch == '\n' && i < n - 1)                           
        str[i++] = '\n';

    str[i] = '\0';
    return i;
}