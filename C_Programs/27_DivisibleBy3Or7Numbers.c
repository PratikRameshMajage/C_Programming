// Find the numbers which fully Divisibe by 3 and 7.
#include<stdio.h>
#include<conio.h>
void main(){
    int limit,i;
    clrscr();
    printf("\nEnter the Limit: "); 
    scanf("%d",&limit);
    for(i=1; i<=limit; i++){
        if(i%3==0 || i%7==0){
            printf("\n%d",i);
        }
    }
    getch();
}