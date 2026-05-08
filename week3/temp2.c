#include <stdio.h>
int main(void)
{
 int Celcius;
 printf("Enter Celcius: ");
 scanf("%d", &Celcius);

 int fahrenheit = (Celcius*1.8)+32;
 printf("%dc° = %df° \n",Celcius,fahrenheit);

 if(Celcius < 0){
    printf("❄️ Freezing weather");
 }
 else if(Celcius<10){
    printf("🥶 Very cold weather");
 }
 else if(Celcius<20){
    printf("🧥 Chilly weather");
 }
 else if(Celcius<30){
    printf("🖼️ Normal weather");
 }
else if(Celcius<40){
    printf("☀️ Hot weather");
 }
 else if(Celcius>40){
    printf("🔥 Very hot weather");
}
}
