#include<stdio.h>
#include<conio.h>
void main(){
    // Arithmatic Operators:
    int num1, num2, addition, subtraction, multiplication, division, modulos;
    clrscr();
    printf("\nEnter First Number: ");
    scanf("%d",&num1);
    printf("\nEnter Second Number: ");
    scanf("%d",&num1);
    addition = num1+num2;
    subtraction = num1-num2;
    multiplication = num1*num2;
    division =  num1/num2;
    modulos = num1%num2;
    printf("\nAdditon of %d and %d is: %d",num1,num2,addition);
    printf("\nSubtraction of %d and %d is: %d",num1,num2,subtraction);
    printf("\nMultiplication of %d and %d is: %d",num1,num2,multiplication);
    printf("\nQuotient of %d and %d is: %d",num1,num2,division);
    printf("\nRemainder of %d and %d is: %d",num1,num2,modulos);
    getch();
}