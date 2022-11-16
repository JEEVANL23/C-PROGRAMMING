#include<stdio.h>

int main(){
    int n1 = 0;
    int n2 = 0;
    int *p = &n1;

   // p = &n1;    // address of n1 is accessed

    *p = 2; // 2 is stored in n1 n1 = 2

    n2++;   // n2 is incremented n2 = 1

    n2 = n2 + *p; // content of both n2 and p is addedd and stored in n2 ,n2 = 3

    p = &n2;    // address of n2 is accessed

    ++*p; // contents of n2 is incremented n2 = 4

    printf("n1 = %d , n2 = %d , *p = %d , *p + n2 = %d ", n1 , n2 , *p , *p + n2);
    return 0;

}