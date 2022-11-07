#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){

    int p;
    int i;

    int prime[50] = {0};
    int prime_index = 2;

    bool isprime;


    prime[0] = 2;
    prime[1] = 3;


    for ( p = 5; p <= 100; p = p+ 2)
    {
        /* code */
        isprime = true;

        for ( i = 1; isprime && p/prime[i]>= prime[i]; ++i)
        {
            /* code */
            if (p % prime[i] == 0)
            {
                /* code */
                isprime = false;
            }
            if (isprime == true)
            {
                /* code */
                prime[prime_index] = p;
                ++prime_index;
            }   
        }
    }
    for ( i = 0; i < prime_index; ++i)
    {
        /* code */
        printf("%i\n",prime[i]);
    }
    
    printf("\n");

    return 0;
}