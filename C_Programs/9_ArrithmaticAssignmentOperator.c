#include<stdio.h>
#include<conio.h>
void main(){
    // Arthmatic Assignment Operator:
    int num1, num2;
    clrscr();
    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);

    printf("Addition is: ",num1+=num2);
    // printf("Subtraction : %d",num1,num2,num1-=num2);
    // printf("Multiplication of %d and %d is: %d",num1,num2,num1*=num2);
    // printf("Division of %d and %d is: %d",num1,num2,num1/=num2);
    // printf("Modulo of %d and %d is: %d",num1,num2,num1%=num2);
    getch();
}