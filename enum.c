#include<stdio.h>

int main(){

    enum company {google,facebook,xerox,yahoo,ebay,microsoft};
    enum company a = xerox;
    enum company b = google;
    enum company c = ebay;

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);     // %d is used to take the index value for corresponding key



    return 0;
}