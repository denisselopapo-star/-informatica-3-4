#include <stdio.h>
//prototype
void n1_mul_n2(void);
void n1_div_n2(void);
void n1_sub_n2(void);
void n1_add_n2(void);

int main(void){

    int user_response;

    printf("select an option:\n");
    printf("1.multiplication\n");
    printf("2.divition\n");
    printf("3.subbtrection\n");
    printf("4.addition\n");
    scanf("%d", &user_response);

    if (user_response==1){
        n1_mul_n2();
    }else if (user_response==2){
        n1_div_n2();
    }else if (user_response==3){
        n1_sub_n2();
    }else if (user_response==4){
        n1_add_n2();
    }else {
        printf("invalid option\n");

}

void n1_sub_n2(void){
    float num1;
    float num2;
 printf("Enter operation: ");
 scanf("%f-%f", &num1,&num2);
 float num3=&num1+&num2;
 printf("%.2f-%.2f=%.2f",num1,num2,num3);

}
void n1_mul_n2(void){
    float num1;
    float num2;
 printf("Enter operation: ");
 scanf("%f*%f", &num1,&num2);
 float num3=&num1+&num2;
 printf("%.2f*%.2f=%.2f",num1,num2,num3);

}
void n1_add_n2(void){
    float num1;
    float num2;
 printf("Enter operation: ");
 scanf("%f+%f", &num1,&num2);
 float num3=&num1+&num2;
 printf("%.2f+%.2f=%.2f",num1,num2,num3);
}
void n1_div_n2(void){
    float num1;
    float num2;
 printf("Enter operation: ");
 scanf("%f/%f", &num1,&num2);
 float num3=&num1+&num2;
 printf("%.2f/%.2f=%.2f",num1,num2,num3);
}
