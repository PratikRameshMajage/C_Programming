// Print numbers upto the Limit.
#include<stdio.h>
#include<conio.h>
void main(){
    int limit;
    int i;
    clrscr();
    printf("Enter the limit: ");
    scanf("%d",&limit);
    printf("Limit is: %d",limit);
    for(i = 1; i<=limit; i++){
        printf("\nI is: %d",i);
    }
    getch();
}