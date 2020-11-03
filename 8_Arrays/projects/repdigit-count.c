#include <stdio.h>
#include <stdbool.h>

#define SIZE 10


int main(void)
{
   int occurrences[SIZE] = {0};
   int i, j, digit, index, number;
   long n;

   printf("Enter a number: ");
   scanf("%ld", &n);

   printf("Digit:\t\t");
   for (i = 0; i < SIZE; i++) {
      printf("%2d", i);
   }
   printf("\n");

   while (n > 0) {
      digit = n % 10;
      occurrences[digit]++; 
      n /= 10;
   }

   printf("Occurences:\t");
   for (i = 0; i < SIZE; i++) {
      printf("%2d", occurrences[i]);
   }

   printf("\n");
   
   return 0;
}