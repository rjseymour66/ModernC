#include <stdio.h>
#include <math.h>

int power(int x, int n);

int main(void)
{
   int x, n;
   printf("Enter a value for x and n: ");
   scanf("%d %d", &x, &n);

   printf("%d\n", power(x, n));


   return 0;
}

int power(int x, int n) {
   if (n == 0)
      return 1;
   else if (n % 2 == 0)
      return pow(pow(x, (n/2)), 2);
   else 
      return x * pow(x, n-1);
}