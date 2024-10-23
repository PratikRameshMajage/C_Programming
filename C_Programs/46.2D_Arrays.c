#include<stdio.h>
#include<conio.h>
void main(){
    int num1[3][3];
    int num2[3][3];
    int sum[3][3];
    int row, col, sum;
    clrscr();
    for(row = 0; row<3;row++){
        for(col = 0; col<3; col++){
            printf("\nnum1: ");  
            scanf("%d",&num1[row][col]);
            printf("\nnum2: ");
            scanf("%d",&num2[row][col]);
        }
    }
        for(row =0; row<3;row++){
        for(col = 0; col<3; col++){
            sum[row][col] = num1[row][col]+num2[row][col]
            printf("%d",&sum[row]);
        }
    }
    getch();
}