#include <stdio.h>

struct time {
   int hours;
   int minutes;
   int seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
   struct time test = split_time(3725);

   printf("test.hour:\t%d\n", test.hours);
   printf("test.minutes:\t%d\n", test.minutes);
   printf("test.seconds:\t%d\n", test.seconds);

   return 0;
}

struct time split_time(long total_seconds) {
   struct time result;

   result.hours = total_seconds / 3600;
   total_seconds %= 3600;
   result.minutes = total_seconds / 60;
   total_seconds %= 60;
   result.seconds = total_seconds;

   return result;
}