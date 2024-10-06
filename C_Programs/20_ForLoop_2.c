// Print numbers upto the Limit. Without intializing and increamenting i.
#include<stdio.h>
#include<conio.h>
void main(){
    int limit;
    int i = 1;
    clrscr();
    printf("Enter the limit: ");
    scanf("%d",&limit);
    printf("Limit is: %d",limit);
    for( ; i<=limit; ){
        printf("\nI is: %d",i);
        i++;
    }
    getch();
}