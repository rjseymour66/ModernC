/* Ask the user for a loan amount, interest ratee,
   and montly payment.Calculate the remaining balance 
   on a loan after the first, second, and third monthly 
   payments. */

#include <stdio.h>

int main(void)
{
   float balance, rate, monthly_rate, payment, first, second, third;

   printf("Enter amount of loan: ");
   scanf("%f", &balance);
   printf("Enter interest rate: ");
   scanf("%f", &rate);
   printf("Enter montly payment: ");
   scanf("%f", &payment);

   rate = rate / 100;
   monthly_rate = rate / 12;
   printf("**************************\n");
   printf("rate: %f\n", rate);
   printf("balance: %f\n", balance);
   printf("payment: %f\n", payment);
   printf("**************************\n");

   // first
   first = (balance - payment) + (monthly_rate * balance);
   balance = first;
   printf("Balance remaining after first payment: %.2f\n", first);

   // second
   second = (balance - payment) + (monthly_rate * balance);
   balance = second;
   printf("Balance remaining after second payment: %.2f\n", second);

   // third
   third = (balance - payment) + (monthly_rate * balance);
   balance = third;
   printf("Balance remaining after third payment: %.2f\n", third);
   
   return 0;
}