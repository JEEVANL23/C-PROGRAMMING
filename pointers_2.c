#include<stdio.h>

int main(){

    int n = 10,x;

    int *p = NULL;

    p = &n;

    x = *p;

    printf("%d\n",n);

    printf("%d\n",x);   // dereferencing the value stored in that pointer - value at the address


    printf("%p\n",p);     // address stored in p

    printf("%p\n",&n);    // original address

    printf("%p\n",&p);    // address of p

    printf("%d\n",(int)sizeof(p));

    return 0;
}