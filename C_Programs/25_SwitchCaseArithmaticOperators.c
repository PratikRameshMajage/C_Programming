#include<stdio.h>
#include<conio.h>
void main(){
    int num1, choice, num2;
    clrscr();
    printf("\nEnter First Number: ");
    scanf("%d",&num1);
    printf("\nEnter Second Number: ");
    scanf("%d",&num2);
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.Remainder");
    printf("\n\nEnter your Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("\nAddition of %d & %d is: %d", num1, num2, num1+num2);
                break;

        case 2: printf("\nSubtraction of %d & %d is: %d", num1, num2, num1-num2);
                break;

        case 3: printf("\nMultiplication of %d & %d is: %d", num1, num2, num1*num2);
                break;

        case 4: printf("\nDivision of %d & %d is: %d", num1, num2, num1/num2);
                break;

        case 5: printf("\nRemainder of %d & %d is: %d", num1, num2, num1%num2);
                break;
        
        default: printf("\nInvalid Choice:");
    }
    getch();
}