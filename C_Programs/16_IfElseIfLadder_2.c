#include<stdio.h>
#include<conio.h>
void main(){
    int budget;
    clrscr();
    printf("Enter your Budget: ");
    scanf("%d",&budget);
    printf("Your Budget is %d", budget);
    if(budget>=400 && budget<=500){
        printf("International Tour!");
    }
    else if(budget>=300 && budget<=399){
        printf("National Tour!");
    }
    else if(budget>=200 && budget<=299){
        printf("City Tour!");
    }
    else if(budget>=100 && budget<=199){
        printf("Local Tour!");
    }
    else if(budget>=0 && budget<=99){
        printf("Home Tour.");
    }
    else{
        printf("Invalid Budget!");
    }
    getch();
}