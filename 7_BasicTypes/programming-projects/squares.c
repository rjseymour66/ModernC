#include <stdio.h>
#include <limits.h>

int main(void)
{


   int i_max = INT_MAX;
   short s_max = SHRT_MAX;
   long l_max = LONG_MAX;

   printf("int max: %d\n", i_max);
   printf("short max: %d\n", s_max);
   printf("long max: %ld\n", l_max);


   int n, i, square;

   printf("Enter an integer: ");
   scanf("%d", &n);

   for (i = 1; square < n; i++) {
      square = i * i;

      printf("%3d: %3d\n", i, i * i);
  

      if (i % 24 == 0) {
         printf("Press Enter to continue...\n");
         while(getchar() != '\n');
      }
   }

   return 0;
}