#include <stdio.h>
int main(void)
{
    int a=5; //= means assignment
    int b=5;
    int c=10; //we created three variiables

    printf("%d == %d is %d \n", a,b,a==b);// ==means comparison
    printf("%d == %d is %d \n", a,c,a==c);
    printf("%d != %d is %d \n", a,c,a!=c);

    //program that identifies negative numbers
    int number;
    printf("enter a number: ");
    scanf("%d",&number);
    if (number <0){//it gives the indication if num is<0
        printf("%d is a negative number. \n", number);
    }else{ //if the ifs are not true then else helps 
         printf("%d is a positive number. \n", number);
    }
}
