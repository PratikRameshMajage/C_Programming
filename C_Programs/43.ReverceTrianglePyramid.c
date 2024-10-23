// ReverceTrianglePyramid
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k,l;
    clrscr();
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf("  ");
        }
        for(k=5;k>=1;k++){
            printf("* ");
        }
        for(l=4;l>=1;l++){
            printf("* ");
        }
    }
    getch();
}

//  *********
//   *******
//    *****
//     ***
//      *
