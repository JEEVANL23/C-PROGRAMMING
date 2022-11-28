#include<stdio.h>

int main(){

    int i = 10;
    float f = 2.3;
    char c = 'k';


    void *p;

    p = &i;
    printf("%d\n",*(int *)p);


    p = &f;
    printf("%.2f\n",*(float *)p);

    p = &c;
    printf("%c\n",*(char *)p);



    return 0;
}