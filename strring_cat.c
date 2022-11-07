#include<stdio.h>

#include<string.h>



int main(){

    char src[50];
    char dest[50];


    strcpy(src," hello ");
    strcpy(dest," jeevan how are you");

    printf(" %s \n",strncat(src,dest,40));



    return 0;
}