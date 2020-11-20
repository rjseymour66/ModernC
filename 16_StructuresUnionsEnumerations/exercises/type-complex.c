#include <stdio.h>

typedef struct {
   double real;
   double imaginary;
} Complex;

Complex make_complex(double r, double i);

Complex add_complex(Complex a, Complex b);

int main(void)
{

   Complex c1, c2, c3;

   c1 = make_complex(2.0, 3.0);
   c2 = make_complex(1.0, 1.0);

   c3 = add_complex(c1, c2);

   printf("c3.real:\t%.2f\n", c3.real);
   printf("c3.imaginary:\t%.2f\n", c3.imaginary);

   return 0;
}

Complex make_complex(double r, double i) {
   Complex result;
   result.real = r;
   result.imaginary = i;
   return result;
}

Complex add_complex(Complex a, Complex b) {
   Complex result;
   result.real = a.real + b.real;
   result.imaginary = a.imaginary + b.imaginary;

   return result;
}