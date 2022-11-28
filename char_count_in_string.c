#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int stringlen(const char *string){

    const char  *lastaddress = string;          // string will be automatically pointing towards first element of an array
    while (*lastaddress)
    {
        /* code */
        lastaddress++;      // incrementing till null terminator-1
    
    }
    return lastaddress - string;
   
}


int main(){

    
    printf("%d\n",stringlen("hello world"));        // h = string and d = last address
    printf("%d\n", stringlen(""));
    printf("%d\n", stringlen("jason"));



    return 0;
}
