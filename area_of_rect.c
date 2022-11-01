#include<stdio.h>

int main(){

    double height,width,area,perimeter;
    printf("enter height : ");
    scanf("%lf",&height);
    printf("enter width : ");
    scanf("%lf",&width);

    area = width*height;
    perimeter = 2*(height+width);

    printf("area is %lf : \n",area);
    printf("perimeter is %lf : \n",perimeter);
    return 0;
}