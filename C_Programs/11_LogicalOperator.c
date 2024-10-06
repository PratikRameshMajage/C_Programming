#include<stdio.h>
#include<conio.h>
void main(){
    // Logical Operator: AND, NAND, OR, NOR.
    int num1, num2;
    clrscr();
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    printf("%d>%d AND %d>%d is: %d", num1,num2,num1,num2,(num1>num2 && num1>num2));
    printf("%d>%d NAND %d>%d is: %d", num1,num2,num1,num2,!(num1>num2 && num1>num2));
    printf("%d>%d OR %d>%d is: %d", num1,num2,num1,num2,(num1>num2 || num1>num2));
    printf("%d>%d NOR %d>%d is: %d", num1,num2,num1,num2,!(num1>num2 && num1>num2));
    getch();
}