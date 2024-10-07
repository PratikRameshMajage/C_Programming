#include<stdio.h>
#include<conio.h>
void main(){
    int num, temp, i, rem, sum=0;
    clrscr();
    printf("\nEnter the Number: ");
    scanf("%d",&num);
    temp = num;
    while(num>0){
        rem = num%10;
        sum = sum + (rem*rem*rem);
        num = num/10;
    }
    if(temp == sum){
        printf("\n%d is Amstrung Number.",temp);
    }else{
        printf("\n%d is Not Amstrung Number.",sum);
    }
    getch();
}