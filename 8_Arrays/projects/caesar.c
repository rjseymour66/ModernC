#include <stdio.h>

#define SIZE 80

int main(void)
{
   char ch, message[SIZE] = {' '}, new_message[SIZE] = {' '};
   int i, shift;

   printf("Enter the message to be encrypted: ");
   i = 0;
   while ((ch = getchar()) != '\n') {
      message[i++] = ch;
   }

   printf("Enter shift amount (1-25): ");
   scanf("%d", &shift);

   for (i = 0; i < SIZE; i++) {
      if (message[i] > 64 && message[i] < 90)
         new_message[i] = ((message[i] - 'A') + shift) % 26 + 'A';
      else if (message[i] > 96 && message[i] < 123)
         new_message[i] = ((message[i] - 'a') + shift) % 26 + 'a';
      else 
         new_message[i] = message[i];
   }

   printf("Encrypted message: ");

   for (i = 0; i < SIZE; i++) {
      printf("%c", new_message[i]);
   }
      

   printf("\n");

   return 0;
}