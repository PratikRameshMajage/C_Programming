#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    clrscr();
    for(i=2;i<=100;i++){
        if(i%2==0){
            printf("%d is Not Prime Number.",i);
        }
        else{
            printf("%d is Prime Number.",i);
        }
    }
    getch();
}
