#include <stdio.h>
//prototype
void mul(void);
void div(void);
void sub(void);
void add(void);

int main(void){

    int user_operation;

    printf("select an option:\n");
    printf("1.multiplication\n");
    printf("2.divition\n");
    printf("3.subbtrection\n");
    printf("2.addition\n");
    scanf("%d", &user_response);

    if (user_response == ){
        n1_mul_n2();
    }else if (user_response == 2){
        n1_div_n2();
    }else{
        n1_sub_n2();
    }else{
        add();
    }else{
        printf("invalid option\n");

}

void mul(void){
    int mult;
 printf("Enter operation: ");
 scanf("%d", &mul);

 int mul= (%d*%d);
 printf("%d = %d \n",mult,mul);
}

void div(void){
    int f;
 printf("Enter fahrenheit: ");
 scanf("%d", &f);

 int c = (f-32)/1.8;
 printf("%df° = %dc° \n",f,c);
}
void sub(void){
    int c;
 printf("Enter c: ");
 scanf("%d", &c);

 int f = (c*1.8)+32;
 printf("%dc° = %df° \n",c,f);
}
void add(void){
    int c;
 printf("Enter c: ");
 scanf("%d", &c);

 int f = (c*1.8)+32;
 printf("%dc° = %df° \n",c,f);
}
