#include<stdio.h>
#include<conio.h>
void main(){
    int num, i, fact = 1;
    clrscr();
    printf("Enter the Number: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        fact = fact * i;
    }
    printf("Factorial of %d is: %d", num, fact);
    getch();
}