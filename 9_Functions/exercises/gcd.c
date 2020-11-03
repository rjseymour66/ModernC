#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
   printf("%d", gcd(270, 192));

   printf("\n");
   return 0;
}

int gcd(int m, int n) {
   int temp, remainder;
   if (m < n) {
      temp = m;
      m = n;
      n = temp;      
   }

   while (n != 0) {
      remainder = m % n;
      m = n;
      n = remainder;
   }    
   return m;  
}