#include<stdio.h>

int main(int argc, char *argv[]){


        int num_of_arg = argc;
        char *arg1 = argv[0];
        char *arg2 = argv[1];

        printf("%d\n",num_of_arg);
        printf("%s\n",arg1);
        printf("%s\n",arg2);



    return 0;
}