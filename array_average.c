#include<stdio.h>

int main(){

    int a[10];
    int count = 10;
    int sum = 0;
    float avg = 0.0f;



    printf("enter the values : \n");

    int i;
    for ( i = 0; i < count; i++)
    {
        /* code */
        scanf("%d",&a[i]);
        sum += a[i];
    }
    

    avg = (float) sum/count;

    printf("average is %.2f\n",avg);



    return 0;
}