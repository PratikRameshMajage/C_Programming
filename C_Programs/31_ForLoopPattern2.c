//Sqare Pattern by printing Column value
#include<stdio.h>
#include<conio.h>
void main(){
    int num,i,j;
    clrscr();
    printf("/nEnter the Nnumber: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++){        //row
        for(j=1; j<=num; j++){    //col 
            printf("* ");         //col value print
        }
        printf("\n");
    }
    getch();

}