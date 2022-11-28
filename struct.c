#include<stdio.h>

struct 
{
    /* data */
    int month;
    int date;
    int year;
}today ;        // today is variable of type date

// today is an instance of structure 
int main(){

    today.date = 25;
    today.month = 9;
    today.year = 2022;

    printf("todays date is %i %i %i \n", today.date, today.month, today.year);

    return 0;
}
