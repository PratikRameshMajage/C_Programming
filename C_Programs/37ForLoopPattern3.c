#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k;
    clrscr();
    for(i=1;i<=5;i++){
        for(j=5;j<=1;j--){
            printf("  ");
        }
        for(k=1;k<=5;k++){
            printf("* ");
        }
        printf("\n");
    }
    getch();
}