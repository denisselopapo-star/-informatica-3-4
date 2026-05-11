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

    if (user_response == 1){
        c_to_f();
    }else if (user_response == 2){
        f_to_c();
    }else{
        printf("invalid option\n");
    }

}

void mul(void){
    int m;
 printf("Enter operation: ");
 scanf("%d", &c);

 int m= (m*m)+32;
 printf("%dc° = %df° \n",c,f);
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
