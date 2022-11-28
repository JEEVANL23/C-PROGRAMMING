#include<stdio.h>

struct date
{
    /* data */
    int month;
    int day;
    int year;
};

int main(){
struct date today,*datptr;
datptr = &today;
datptr->month = 21;
datptr->day = 25;
datptr->year = 2015;

printf("today's date is %d %d %d \n", datptr->month,datptr->day,datptr->year);

return 0;
}