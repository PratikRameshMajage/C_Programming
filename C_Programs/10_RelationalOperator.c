#include<stdio.h>
#include<conio.h>
void main(){
    // Relational Operator.
    int num1,num2;
    printf("\nEnter First Number: ");
    scanf("%d",&num1);
    printf("\nEnter Second Number: ");
    scanf("%d",&num2);
    clrscr();
    // Greater than
    printf("Is %d Greater than %d : %d",num1,num2,(num1>num2));
    // Greater than Equal to
    printf("Is %d  Greater than Equal to %d : %d",num1,num2,(num1>=num2));
    // Less than 
    printf("Is %d Less than  %d : %d",num1,num2,(num1<num2));
    // Less than Equal to
    printf("Is %d Less than Equal to %d : %d",num1,num2,(num1<=num2));
    // Equal to - similar
    printf("Is %d Equal to %d : %d",num1,num2,(num1==num2));
    // Not Equal to - not similar
    printf("Is %d Not Equal to %d : %d",num1,num2,(num1!=num2));
    getch();
}