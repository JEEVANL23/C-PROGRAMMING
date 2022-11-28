#include<stdio.h>

int arraysum(int arr[], const int n){

            int sum = 0, *p;
            int *const arrayend = arr+n;

            for ( p = arr; p < arrayend; p++)
            {
                /* code */
                sum += *p;
            }

            return sum;
}

int main(){


        int arraysum(int array[], const int n);
        int value[10] = {3,5,7,2,-5,6,8,10,45,19};

        printf("%i\n", arraysum(value,10));


        return 0;
}