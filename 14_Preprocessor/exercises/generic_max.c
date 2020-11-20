#include <stdio.h>

int main(void)
{

   printf("%s (c) 2020 Wacky Software inc.\n", __FILE__);
   printf("Compiled on %s at %s\n", __DATE__, __TIME__);
   printf("%d\n", __LINE__);

   return 0;
}