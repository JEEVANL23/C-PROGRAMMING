#include<stdio.h>

#include<string.h>



int main(){

    printf("%d\n",strcmp("A","B")); // if L < R = -1 

    printf("%d\n",strcmp("B","A")); // if L > R = 1


    printf("%d\n",strcmp("apples","apple"));    // if L > R = 1

    printf("%d\n",strcmp("A","A")); // if L == R = 0




    if (strncmp("astronomy","astro",5) == 0)
    {
        /* code */
        printf("found\n");
    }
    







    return 0;
}