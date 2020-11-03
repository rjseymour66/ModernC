#include <stdio.h>

int main(void)
{
   typedef char Int8;
   typedef short Int16;
   typedef int Int32;

   Int8 a = 20;
   Int16 b = 25;
   Int32 c = 32;

   printf("%ld\n", sizeof(a));
   printf("%ld\n", sizeof(b));
   printf("%ld\n", sizeof(c));

   printf("*********************");

   printf("%d\n", 077);
   printf("%d\n", 0x77);
   printf("%d\n", 0XABC);
   printf("%i\n", 'a');


   return 0;
}