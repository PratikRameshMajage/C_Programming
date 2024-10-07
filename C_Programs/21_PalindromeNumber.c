#include<stdio.h>
#include<conio.h>
void main(){
    int num, temp, rem, i, sum = 0;
    clrscr();
    printf("\nEnter the Number: ");
    scanf("%d",&num);
    temp = num;
    while(num>0){
        rem = num%10;
        sum = (sum*10)+rem;
        num = num/10;
    }
    if(sum == temp){
        printf("\n%d is Palindrome Number!",temp);
    }else{
        printf("\n%d is Not Palindrome Number!",sum);
    }
    getch();
}