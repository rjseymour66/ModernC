#include <stdio.h>

int func(char *s, char *t);

int main(void)
{

   char *x = "cathy";
   char *y = "dog";

   printf("%d\n", func(x, y));
   
   return 0;
}

int func(char *s, char *t) {
   for (; *s == *t;) 
      if (*s == '\0')
         return 0;
      else 
         s++, t++;

   return *s - *t;
}