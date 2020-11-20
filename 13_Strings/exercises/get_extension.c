#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void)
{
   char *file = "answer.cpp";
   char blank[10];

   get_extension(file, blank);

   printf("%s\n", blank);

   return 0;
}

void get_extension(const char *file_name, char *extension) {

   while (*file_name) {
      if (*file_name++ == '.') {
         strcpy(extension, file_name);
         return;
      }
   }
   strcpy(extension, "");
}