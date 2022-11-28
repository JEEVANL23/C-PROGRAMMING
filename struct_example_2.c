#include<stdio.h>
#include<stdlib.h>

struct item
{
    char *itemname;
    int qty;
    float price;
    float amount;
};
void readitem(struct item * i){
    printf("\nenter product name ");
    scanf("%s",i->itemname);

    printf("\nquantity :");
    scanf("%d",&i->qty);

    printf("\n price : ");
    scanf("%f",&i->price);

    i->amount = (float)i->qty * i->price;
}
void printitem(struct item * i){

        printf("name : %s\n",i->itemname);
        printf("price : %f\n",i->price);
        printf("quantity : %d\n",i->qty);
        printf("amount : %f\n",i->amount);

}

int main(){
    struct item  itm;
    struct item *pitem;

    pitem = &itm;

    pitem->itemname = (char *) malloc(30*sizeof(char));

    if(pitem == NULL)
        exit(-1);

    readitem(pitem);
    printitem(pitem);
    free(pitem->itemname);

    return 0;
}

