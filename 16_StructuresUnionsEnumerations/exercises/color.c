#include <stdio.h>

struct color {
   int red;
   int green;
   int blue;
};

int main(void)
{
   const struct color MAGENTA = { 255, 0, 255 };

   const struct color MAGENTA = { .red = 255, .blue = 255 };


   return 0;
}