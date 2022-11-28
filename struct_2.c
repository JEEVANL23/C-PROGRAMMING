#include<stdio.h>


struct date
{
    /* data */
    int d;
    int m;
    int y;
} ;



int main(){

    today = (struct date) {.m = 2, .d = 2, .y = 2022};

    printf("todays date is %i %i %i \n", today.d, today.m, today.y);


    return 0;
}