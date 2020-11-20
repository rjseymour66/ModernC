#include <stdio.h>

struct date {
   int month;
   int day;
   int year;
};

int day_of_year(struct date d);

int compare_dates(struct date d1, struct date d2);

int main(void)
{

   return 0;
}

int day_of_year(struct date d) {
   if (d.day > 0 && d.day < 366)
      return d.day;
   else 
      return -1;
}

int compare_dates(struct date d1, struct date d2) {
   if (d1 = d2)
      return 0;
   
   if (d1.year < d2.year)
      return -1;

   if (d1.year = d2.year && d1.month)
   
}