#include<stdio.h>

int main(){

    float v1,v2,result,result1,result2,result3;
    char oper;

    printf("enter the expression : \n");

    scanf("%f %c %f",&v1,&oper,&v2);

    result = v1+v2;
    result1 = v1-v2;
    result2 = v1*v2;
    result3 = v1/v2;

    switch (oper)
    {
    case '+':
        printf("%.2f\n",result);
        break;

    case '-':
        printf("%.2f\n",result1);
        break;

    case '*':
        printf("%.2f\n",result2);
        break;

    case '/':
        if(v2 == 0){
            printf("division by 2\n");
        }
        else{
        printf("%.2f\n",result3);
        break;
        }

    
    default:
        break;
    }


    return 0;
}