#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
   int hr, min, sec;

   split_time(7300, &hr, &min, &sec);

   printf("hr:\t%d\n", hr);
   printf("min:\t%d\n", min);
   printf("sec:\t%d\n", sec);

   return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec) {
   *hr = (total_sec / 3600) % 24;
   *min = total_sec % 60;
   *sec = (int)total_sec % 3600;
}