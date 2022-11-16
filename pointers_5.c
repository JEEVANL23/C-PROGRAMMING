#include<stdio.h>

int main(){

    int a = 10;
    int *p = &a;
    printf("%d\n",*p);

    *p = 20;
    printf("%d\n",*p);

    a = 11;
    printf("%d\n",*p);


    int c = 12;
    p = &c;
    printf("%d\n",*p);

    // address of the pointer cannot be changed
    int count = 6;
    int *const q = & count;


    return 0;
}