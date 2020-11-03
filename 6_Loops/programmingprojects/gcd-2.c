#include <stdio.h>

int main(void)
{
   int big, little, remainder;

   printf("Enter 2 integers:");
   scanf("%d %d", &big, &little);

   if (big < little){
      remainder = big;
      big = little;
      little = remainder;
   }
      
   while (little != 0) {
      remainder = big % little;
      big = little;
      little = remainder;
   }

   printf("Greatest common divisor: %d\n", big);







   return 0;
}