/* Calculate the volume of a sphere from user 
   input using stdin. */

#include <stdio.h>

#define PI 3.1415926535898
#define VOLUME_NO_RADIUS (4.0f / 3.0f) * PI

int main(void)
{
   float radius;

   printf("Enter the radius of the sphere: \n");
   scanf("%f", &radius);

   printf("The radius of the sphere is %.3f\n", VOLUME_NO_RADIUS * radius * radius * radius);

   return 0;
}