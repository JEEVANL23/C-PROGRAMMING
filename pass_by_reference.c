#include<stdio.h>

int swap(int *a, int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    return 0;

}


int main(){

    int x = 10;
    int y = 20;

    swap(&x,&y);

    printf("%d\n",x);
    printf("%d\n",y);


    return 0;
}