#include<stdio.h>

int main(){

    int value[] = {1,2,3,4,5,6,7};
    int *p;
    p = &value[0];
    // to make pointer to point to the second element in an array
    // p = &value[1];
    // p+=1;
    

    printf("%d\n", *p);
    printf("%d\n", *(p+3));
    printf("%d\n", *(p+4));

    *(p+4) = 27;
    printf("%d\n", *(p+4));

    return 0;
}