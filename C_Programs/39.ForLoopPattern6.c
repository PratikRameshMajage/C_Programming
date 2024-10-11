#include<stdio.h>
#include<conio.h>
void main(){
    int i,j;
    clrscr();
    for(i=1;i<=5,i++){
        for(j=1;j<=5;j++){
            if(j%2==0){
                printf("%d ",(j*7));
            }
            else{
                printf("%d ",(j*5));
            }  
        }
        printf("\n");
    }
    getch();
}