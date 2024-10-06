#include<stdio.h>
#include<conio.h>
void main(){
    int percentage;
    clrscr();
    printf("Enter your Marks: ");
    scanf("%d",&percentage);
    printf("Your marks are %d", percentage);
    if(percentage>=85 && percentage<=100){
        printf("you are in Distiction!");
    }
    else if(percentage>=70 && percentage<=84){
        printf("you got A grade.");
    }
    else if(percentage>=65 && percentage<=70){
        printf("you got B grade.");
    }
    else if(percentage>=50 && percentage<=64){
        printf("you got c grade.");
    }
    else if(percentage>=35 && percentage<=49){
        printf("you got c grade.");
    }
    else{
        printf("you are Fail");
    }
    getch();
}