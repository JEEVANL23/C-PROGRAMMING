#include<stdio.h>

int main()
{
    
        char str1[] = " hello my name ";
        char str2[] = "my name is jeevan";

        int count = 0;


        while (str1[count] != '\0')
        {
            /* code */
            count++;
        }
        
        printf("%d\n",count);

        while (str2[count] != '\0')
        {
            /* code */
            count++;
        }

        printf("%d\n",count);







    return 0;
}
