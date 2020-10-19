#include <stdio.h>

int main(void)
{

   float value, num_shares, price_per_share;

   printf("Enter number of shares and price-per-share: ",);
   scanf("%f %f", &num_shares, & price_per_share);

   value = num_shares * price_per_share;

   if (value < 2500.00f)
      commission = 30.0f + .017f * value;
   else if (value < 6250.00f)
      commission = 56.0f + .0066f * value;
   else if (value < 20000.00f)
      commission = 76.0f + .0034f * value;
   else if (value < 50000.00f)
      commission = 100.0f + .0022f * value;
   else if (value < 500000.00f)
      commission = 155.0f + .0011f * value;
   else 
      commission = 255.00f + .0009f * value;

   if (commission < 39.00f)
      commission = 39.00f;

   printf("Commission: $%.2f", commission);

   return 0;
}