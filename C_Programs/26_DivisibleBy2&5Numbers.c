// Find the numbers which fully Divisibe by 2 and 5.
#include<stdio.h>
#include<conio.h>
void main(){
    int limit,i;
    clrscr();
    printf("\nEnter the Limit: "); 
    scanf("%d",&limit);
    for(i=1; i<=limit; i++){
        if(i%2==0 && i%5==0){
            printf("\n%d",i);
        }
    }
    getch();
}