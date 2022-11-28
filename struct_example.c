// declaring and initializing the structure

#include<stdio.h>
#include<stdlib.h>

struct employee
{
    /* data */
    char name[30];
    char date[15];
    float salary;
};

int main(){

struct employee emp = {"jeevan","7/1/2023",20000};
printf("\n Name : %s", emp.name);
printf("\n Date : %s", emp.date);
printf("\n salary : %f\n", emp.salary);


printf("enter employee details : \n");
printf("Name :\n");
scanf("%s", emp.name);
printf("Date :\n");
scanf("%s", emp.date);
printf("salary :\n");
scanf("%f", &emp.salary);

printf("employee details entered are : Name : %s, date of joining : %s, Salary expected : %f ",emp.name,emp.date,emp.salary);

    return 0;
}