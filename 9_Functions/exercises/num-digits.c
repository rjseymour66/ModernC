#include <stdio.h>

int num_digits(int num);

int main(void)
{
   printf("%d", num_digits(54321));
   printf("\n");

   return 0;
}

int num_digits(int num){
   int count = 0;
   while (num > 0) {
      num /= 10;
      count++;
   }
   return count;
}