#include <stdio.h>
int main(void)
{
 int Fahrenheit;
 printf("Enter Fahrenheit: ");
 scanf("%d", &Fahrenheit);

 int Celsius = (Fahrenheit-32)/1.8;
 printf("%dF° = %dC° \n",Fahrenheit,Celsius);
 //-40°F = -40C°
}


