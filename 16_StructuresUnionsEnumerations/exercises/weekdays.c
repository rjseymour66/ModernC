#include <stdio.h>

struct pinball_machine {
   char name[40];
   int year;
   enum {
      EM,
      SS
   } type;
   int players;
}


int main(void)
{
   enum days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

   typedef enum { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY } Days;

   return 0;
}