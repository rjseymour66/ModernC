#include <stdio.h>
#include <math.h>

void polynomial(int x);

int main(void)
{
   int x;
   printf("Enter a value for x: ");
   scanf("%d", &x);
   polynomial(x);

   printf("\n");

   return 0;
}
void polynomial(int x) {
   int value;
   value =
   (3 * pow(x, 5)) +
   (2 * pow(x, 4)) -
   (5 * pow(x, 3)) -
   (1 * pow(x, 2)) + 
   (7 * x) - 6;
   printf("%d", value);
}