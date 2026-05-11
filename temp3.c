#include <stdio.h>
//prototype
void c_to_f(void);
void f_to_c(void);

int main(void){

    int user_response;
    printf("Temperature converter\n");
    printf("select an option:\n");
    printf("1.celsius to fahrenheit\n");
    printf("2.farenheit to celcius\n");
    scanf("%d", &user_response);

    if (users_response==1){
        c_to_f();
    }else if (users_response==2){
        f_to_c();
    
    }




}
//2.definition
void c_to_f(void){
    int c;
 printf("Enter c: ");
 scanf("%d", &c);

 int f = (c*1.8)+32;
 printf("%dc° = %df° \n",c,f);
}

void f_to_c(void){
    int f;
 printf("Enter fahrenheit: ");
 scanf("%d", &f);

 int c = (f-32)/1.8;
 printf("%df° = %dc° \n",f,Celcius);
}
