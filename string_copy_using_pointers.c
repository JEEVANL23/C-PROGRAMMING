#include<stdio.h>
#include<string.h>


void copystring(char *to, char *from){


    while (*from)
    {
        /* code */
        *to++ = *from++;

    }

    *to = '\0';
}

int main(){

        char string1[] = "a string to be copied";
        char str2[50];

        copystring(str2,string1);
        printf("%s\n",str2);



    return 0;
}