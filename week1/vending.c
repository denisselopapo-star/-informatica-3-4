#include <stdio.h>
int main(void)
{
    //create variables for first snak (tacos order)
    float price1 = 135.99;
    int Quantity_available1 = 15;
    char Selection_code1 = 'A';
     //create variables for second snak (chips)
    float price2 = 15.99;
    int Quantity_available2 = 25;
    char Selection_code2 = 'B';
     //create variables for third snak (brownies)
    float price3 = 19.98;
    int Quantity_available3 = 10;
    char Selection_code3 = 'C';

    printf("Vending Machine Stock \n");
    printf("-----------------------------------------\n");
    printf("\n");
    printf("Item name: Tacos order\n");
    printf("Price: %.2f \n", price1);
    printf("Quantity available: %d \n",Quantity_available1);
    printf("Selection code: %c \n",Selection_code1);
    printf("\n");
    printf("Item name: Chips\n");
    printf("Price: %.2f \n", price2);
    printf("Quantity available: %d \n",Quantity_available2);
    printf("Selection code: %c \n",Selection_code2);
    printf("\n");
    printf("Item name: CBrownies\n");
    printf("Price: %.2f \n", price3);
    printf("Quantity available: %d \n",Quantity_available3);
    printf("Selection code: %c \n",Selection_code3);
}
