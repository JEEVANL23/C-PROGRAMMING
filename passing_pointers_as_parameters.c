#include<stdio.h>

int sqaure(int *a){

    *a = (*a)*(*a);
    return 0;

}

int main(){

    int x;
    scanf("%d",&x);
    sqaure(&x);
    printf("%d\n", x);


    return 0;
}