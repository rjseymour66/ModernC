#include <stdio.h>

struct complex {
   double real;
   double imaginary;
};

struct complex make_complex(double r, double i);

struct complex add_complex(struct complex a, struct complex b);

int main(void)
{
   struct complex c1, c2, c3;

   c1 = make_complex(2.0, 3.0);
   c2 = make_complex(1.0, 1.0);

   c3 = add_complex(c1, c2);

   printf("c3.real:\t%.2f\n", c3.real);
   printf("c3.imaginary:\t%.2f\n", c3.imaginary);

   return 0;
}

struct complex make_complex(double r, double i) {
   struct complex result;
   result.real = r;
   result.imaginary = i;
   return result;
}

struct complex add_complex(struct complex a, struct complex b) {
   struct complex result;
   result.real = a.real + b.real;
   result.imaginary = a.imaginary + b.imaginary;

   return result;
}