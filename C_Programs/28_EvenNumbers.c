//Find Even Numbers. 
#include<stdio.h>
#include<conio.h>
void main(){
    int num,i;
    clrscr();
    printf("\nEnter the Number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("\n%d is Even Number.",num);
    }else{
        printf("\n%d is Odd Number.",num);
    }
    getch();
}