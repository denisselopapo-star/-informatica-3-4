#include <stdio.h>
int main(void)
{
    int item;
    printf("type your item: ");
    scanf("%d", &item);
    int price;
    printf("type your price: ");
    scanf("%d", &price);
    int quantity;
    printf("type your quantity: ");
    scanf("%d", &quantity);

    int total=price*quantity;

    printf("***********************************\n");
    printf("\n");
    printf("Techdraui Grocery Store \n");
    printf("Item\t\t\tQuantity\t\t\tPrice\n");
    printf("%d \t\t\t %d \t\t\t %d \n",item,price,quantity);
    printf("\n");
    printf("-----------------------------------\n");
    printf("\n");
    printf("Total:\t\t\t\t\t\t\t\t\t %d",total);
    printf("\n");
    printf("-----------------------------------\n");
    printf("\n");
    printf("Thank you for your purchase! \n");


}
