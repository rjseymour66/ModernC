#include <stdio.h>

#define TITLE_LEN    25
#define AUTHOR_LEN   25
#define DESIGN_LEN   25

struct catalot_item {
   int stock_number;
   double price;
   int item_type;
   union {
      struct {
         char title[TITLE_LEN + 1];
         char author[AUTHOR_LEN +1];
         int num_pages;
      } book;
      struct {
         char design[DESIGN_LEN + 1];
      } mug;
      struct {
         char design[DESIGN_LEN + 1];
         int colors;
         int sizes;
      } shirt;
   } item;
};

typedef enum { CLUBS, DIAMONDS, HEARTS, SPADES } Suit;

int main(void)
{



   return 0;
}