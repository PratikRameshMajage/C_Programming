#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,row,col;
    clrscr();
    printf("Enter Row Numbers: ");
    scanf("%d", &row);
    printf("Enter Column Numbers: ");
    scanf("%d", &col);
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            printf("* ");
        }
        printf("\n");
    }
    getch();
}