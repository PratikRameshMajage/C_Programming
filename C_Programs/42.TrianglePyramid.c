// TrianglePyramid
#include<stdio.h>
#include<conio.h>
void main(){
    int i,j,k,l;
    clrscr();
    for(i=1;i<=5;i++){
        for(j=5;j>=1;j--){
            printf("  ");
        }
        for(k=1;k<=i;K++){
            printf("* ");
        }
        for(l=2;l<=i;l++){
            printf("* ");
        }
        printf("\n");
    }
    getch();

}

//      *
//     ***
//    *****
//   *******
//  *********