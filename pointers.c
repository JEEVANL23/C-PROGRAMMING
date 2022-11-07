#include<stdio.h>

int main(){

    int n = 10;
    int *p = &n;
    int result = 0;

    result = *p + 5;

    printf("%d\n",result);

    printf("%d\n",n);



    return 0;
}