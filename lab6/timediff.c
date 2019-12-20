#include <stdio.h>
#include <stdlib.h>
int timediff(int year_start, int month_start, int time_start, int year_end, int month_end, int time_end)
{
       int y2, m2, t2;
       int y1, m1, t1;
       m1 = (month_start + 9) % 12;
       y1 = year_start - m1/10;
       t1 = 365*y1 + y1/4 - y1/100 + y1/400 + (m1*306 + 5)/10 + (time_start - 1);
       m2 = (month_end + 9) % 12;
       y2 = year_end - m2/10;
       t2 = 365*y2 + y2/4 - y2/100 + y2/400 + (m2*306 + 5)/10 + (time_end - 1);
       return (t2 - t1);
}
int main(void)
{
       printf("%d\n", timediff(2019, 10, 9, 2020, 1, 1));
       return 0;
}