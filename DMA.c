#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char *str;
    // memory initialzation
    str = (char *)malloc(15 * sizeof(char));
    strcpy(str,"jeevan");
    printf("string = %s , address = %p\n",str,str);

    // reallocating the memory
    str = (char *)realloc(str,25);
    strcat(str,".com");
    printf("string = %s , address = %p\n",str,str);

    free(str);

    return 0;
}