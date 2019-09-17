/*Structure and Array;
Problem : Design a structure with appropriate entry  of a grocery products (id,name,brand name, product type, quantity, price )
create an array of the defined structure and let the user decide how many products he wants to store.
Then store the information using the created array of structure . After that display the name and price whose price is greater than 40.
This whole Process is repeated by using Dynamic Memory Allocation.
*/
#include<stdio.h>
#include<stdlib.h>

struct Product
{
    int id , quantity;
    char name[20] , brandname[30], type[30];
    float price;
};


int main()
{
    Product *ptr;
    int i,x;
    printf("How many products you want to store : ");
    scanf("%d",&x);
    ptr = (Product*) malloc(x* sizeof(Product));
    for (i=0;i<x;i++)
    {
        printf("Enter The ID : ");
        scanf("%d",&(ptr+i)->id);
        printf("Enter The name  : ");
        scanf("%s",&(ptr+i)->name);
        printf("Enter The brand name  : ");
        scanf("%s",&(ptr+i)->brandname);
        printf("Enter The product type  : ");
        scanf("%s",&(ptr+i)->type);
        printf("Enter The quantity  : ");
        scanf("%d",&(ptr+i)->quantity);
        printf("Enter The price  : ");
        scanf("%f",&(ptr+i)->price);


    }
        for(i=0;i<x;i++)
    {
        if((ptr+i)->price>40)
        {
            printf("Name  : ");
            printf((ptr+i)->name);
            printf("\n");
            printf("Price  : ");
            printf("%.2f",(ptr+i)->price);

        }
    }



}
