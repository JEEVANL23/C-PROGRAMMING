#include<stdio.h>

#include<string.h>



int main(){

    char src[] = "hello jeevan how are you";
    char dest[12];

    strncpy(dest,src,7);

    printf("%s",dest);



    return 0;
}