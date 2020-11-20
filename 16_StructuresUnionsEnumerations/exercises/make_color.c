#include <stdio.h>

struct color {
   int red;
   int green;
   int blue;
};

struct color make_color(int red, int green, int blue);

int getRed(struct color c);

bool equal_color(struct color color1, struct color color2);

struct color brighter(struct color c);

int main(void)
{


   return 0;
}


struct color make_color(int red, int green, int blue) {
   struct color result;

   if (red > 255)
      result.red = 255;
   else if (red < 0)
      result.red = 0;

   if (green > 255)
      result.green = 255;
   else if (green < 0)
      result.green = 0;

   if (blue > 255)
      result.blue = 255;
   else if (blue < 0)
      result.blue = 0;

   return result;
}

int getRed(struct color c) {
   return c.red;
}

bool equal_color(struct color color1, struct color color2) {
   return color1 = color2;
}

struct color brighter(struct color c) {
   struct color result;
   if (c.red == 0 && c.green == 0 && c.blue == 0)
      return result = { 3, 3, 3 };
   
   if ((c.red > 0 && c.red < 3) || (c.green > 0 && c.green < 3) || (c.blue > 0 && c.blue < 3)) {
      
   }
      result = { 3, 3, 3 };

   result = { .red /= .7, .green /= .7, .blue /= .7 };

   if ( re)