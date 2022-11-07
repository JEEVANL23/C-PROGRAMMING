#include<stdio.h>

int main(){

    int a,b;

    printf("enter value of a : ");
    scanf("%d",&a);
    printf("enter value of b : ");
    scanf("%d",&b);

    if(a>b){

        printf(" %d is greater than %d\n",a,b);
    }

    else if(a==b){

        printf(" %d is equal to %d\n",b,a);

    }

    else{

        printf(" %d is greater than %d\n",b,a);

    }




    return 0;
}