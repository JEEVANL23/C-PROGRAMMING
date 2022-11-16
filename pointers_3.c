#include<stdio.h>

int main(){

int x = 0;

int *p = &x;

int r;

x = 10;

r = *p + 150;

printf("%d\n",r);
*p = *p + 200; // if we assing changes to pointer it will change the main variable value

// * indicates we are accessing contents of the variable which pointer is pointing


printf("%d \n",*p);

printf("%d \n",x);




    return 0;
}