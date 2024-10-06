#include<stdio.h>
#include<conio.h>
void main(){
    int age;
    clescr();
    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Your age is: %d", age);
    if(age>=18){
        printf("You are Adult!");
    }else{
        printf("You are not adult!");
    }
    getch();
}

