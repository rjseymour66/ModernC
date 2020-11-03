#include <stdio.h>

int main(void)
{
   float n, sum = 1;

   printf("Enter a positive integer: ");
   scanf("%f", &n);

   for (; n > 0; n--){
      sum *= n;
   }

   printf("Factorial of %f: %f\n", n, sum);

   return 0;
}