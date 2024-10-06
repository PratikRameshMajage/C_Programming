#include<stdio.h>
#include<conio.h>
void main(){
    int num1, num2;
    clrscr();
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    printf("Bitwise AND of %d and %d is: %d", num1, num2, (num1&num2));
    printf("Bitwise OR of %d and %d is: %d", num1, num2, (num1&num2));
    printf("Bitwise Complimentory of %d is: %d", num1, num2, (~num1));
    printf("Bitwise Exclusive OR of %d and %d is: %d", num1, num2, (num1&num2));
    printf("Bitwise Right Shift of %d and %d is: %d", num1, num2, (num1>>num2));
    printf("Bitwise Left Shift of %d and %d is: %d", num1, num2, (num1<<num2));
    getch();
}