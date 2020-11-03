#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 26

int main(void)
{
   int i, j;
   char first[SIZE] = {0}, second[SIZE] = {0}, letters[SIZE] = {0};
   char ch;
   bool anagram = true;

   printf("Enter first word: ");


   i = 0;
   while ((ch = getchar()) != '\n') {
      ch = tolower(ch);
      first[i++] = ch;
   }

   for (i = 0; i < SIZE; i++) {
      for (j = 0; j < SIZE; j++) {
         if (first[j] - 97 == i)
            letters[i]++;
      }
   }

   i = 0;
   printf("Enter second word: ");
   while ((ch = getchar()) != '\n') {
      ch = tolower(ch);
      second[i++] = ch;
   }

   for (i = 0; i < SIZE; i++) {
      for (j = 0; j < SIZE; j++) {
         if (second[j] - 97 == i)
            letters[i]--;
      }
   }

   // for (i = 0; i < SIZE; i++) {
   //    printf("%d", letters[i]);
   // }
   

   for (i = 0; i < SIZE; i++) {
      if (letters[i] != 0)
         anagram = false;
   }

   if (anagram)
      printf("The words are anagrams.\n");
   else 
      printf("The words are not anagrams.\n");

   return 0;
}