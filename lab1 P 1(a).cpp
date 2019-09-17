/*Structure and Array;
Problem : Design a structure with appropriate entry  of a grocery products (id,name,brand name, product type, quantity, price )
create an array of the defined structure and let the user decide how many products he wants to store.
Then store the information using the created array of structure . After that display the name and price whose price is greater than 40. */


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
    int i ,x;
    Product parray[999];
    printf("How many products you want to store : ");
    scanf("%d",&x);
    for (i=0;i<x;i++)
    {
        printf("Enter The ID : ");
        scanf("%d",&parray[i].id);
        printf("Enter The name  : ");
        scanf("%s",&parray[i].name);
        printf("Enter The brand name  : ");
        scanf("%s",&parray[i].brandname);
        printf("Enter The product type  : ");
        scanf("%s",&parray[i].type);
        printf("Enter The quantity  : ");
        scanf("%d",&parray[i].quantity);
        printf("Enter The price  : ");
        scanf("%f",&parray[i].price);


    }
    for(i=0;i<x;i++)
    {
        if(parray[i].price>40)
        {
            printf("Name  : ");
            printf(parray[i].name);
            printf("\n");
            printf("Price  : ");
            printf("%.2f",parray[i].price);

        }
    }

}
