#include<stdio.h>
#include<stdlib.h>

int main(){

    int size;
    char *text = NULL;


    printf("enter the limit of text \n");
    scanf("%d",&size);

    text = (char *) malloc(size * sizeof(char));

    if(text != NULL){

        printf("enter some text : \n");
        scanf(" ");
        gets(text);

        printf("inputted text is : %s\n", text);

    }
    free(text);
    text = NULL;

    return 0;
}