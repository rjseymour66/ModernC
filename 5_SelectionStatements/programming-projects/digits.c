#include <stdio.h>

int main(void)
{
   int num, answer;

   printf("Enter a number: ");
   scanf("%d", &num);

   if (num < 10)
      answer = 1;
   else if (num < 100)
      answer = 2;
   else if (num < 1000) 
      answer = 3;
   else if (num < 10000) 
      answer = 4;
   else 
      answer = 5;

   printf("The number %d has %d digits\n", num, answer);

   return 0;
}