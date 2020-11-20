#include <stdio.h>

#define NAME_LEN  20

int main(void)
{
   struct {
      int number;
      char name[NAME_LEN + 1];
      int on_hand;
   } part1 = {528, "Disk drive", 10},
     part2 = {914, "Printer cable", 5};

   printf("Part number:\t%d\n", part1.number);
   printf("Part name:\t%s\n", part1.name);
   printf("Qty on hand:\t%d\n", part1.on_hand);

   typedef struct 
      int number;
      char name[NAME_LEN + 1];
      int on_hand;
   } Part;
   
   

   return 0;
}