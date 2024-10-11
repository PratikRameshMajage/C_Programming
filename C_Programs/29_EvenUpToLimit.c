//Enter Even Number upto Limit.
#include<stdio.h>
#include<conio.h>
void main(){
    int limit,i;
    clrscr();
    printf("\nEnter the Limit");
    scanf("%d",&limit);
    for(i=1; i<=limit; i++){
        if(i%2==0){
            printf("\t%d",i);
        }
    }
    getch();
}