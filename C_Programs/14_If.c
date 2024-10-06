// Accept number from use check that given number is in between 13 to 25.
#include<stdio.h>
#include<conio.h>
void main(){
    int number;
    clrscr();
    printf("\nEnter the Number: ");
    scanf("%d",&number);
    printf("You Enter this Number: %d", number);
    if(number>13 && number<25){
        printf("%d is lie between the 13 and 25.", number);
    }
    getch();
}