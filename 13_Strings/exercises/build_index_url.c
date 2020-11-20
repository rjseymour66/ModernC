#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main(void)
{
   char *domain = "google.com";
   char url[25];

   build_index_url(domain, url);

   printf("%s\n", url);

   return 0;
}

void build_index_url(const char *domain, char *index_url) {

   strcpy(index_url, "http://www.");
   strcat(strcat(index_url, domain), "/index.html");
   ;
}
