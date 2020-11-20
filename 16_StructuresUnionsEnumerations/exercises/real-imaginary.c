#include <stdio.h>

struct {
   double real;
   double imaginary;
} c1 = { 0.0, 1.0 },
  c2 = { 1.0, 0.0 },
  c3;

int main(void)
{

   // copy members of c2 -> c1

   // add c1 and c2 together and store in c3

   c1 = c2;
   c3.real = c1.real + c2.real;
   c3.imaginary = c1.imaginary + c2.imaginary;

   printf("c1.real:\t%.2f\n", c1.real);
   printf("c1.imaginary:\t%.2f\n", c1.imaginary);
   printf("c2.real:\t%.2f\n", c2.real);
   printf("c2.imaginary:\t%.2f\n", c2.imaginary);
   printf("c3.real:\t%.2f\n", c3.real);
   printf("c3.imaginary:\t%.2f\n", c3.imaginary);
   


   return 0;
}