/* Prompts user for phone number in (xxx) xxx-xxxx
   format and returns it in xxx.xxx.xxxx format. */

#include <stdio.h>

int main(void)
{
   int area, exchange, subscriber;

   printf("Enter phone number [(xxx) xxx-xxxx]: ");
   scanf("(%d) %d-%d", &area, &exchange, &subscriber);
   printf("You entered %d.%d.%d\n", area, exchange, subscriber);


   return 0;
}