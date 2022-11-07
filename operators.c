#include<stdio.h>

int main(){

    int a,b,c,d,e,f;
    int g;
    printf("always enter 1st operand greater than 2nd operand ");
    printf("enter 1st operand : \n");
    scanf("%d",&a);
    printf("enter 2nd operand : \n");
    scanf("%d",&b);
    c = a+b;
    d = a-b;
    e = a*b;
    f = a/b;
    g = a%b;
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    printf("%d\n",f);
    printf("%d\n",g);
    
    a++;
    printf("%d\n",a);
    ++a;
    printf("%d\n",a);



    return 0;
}