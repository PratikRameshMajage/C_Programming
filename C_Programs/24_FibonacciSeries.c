#include<stdio.h>
#include<conio.h>
void main(){
    int limit, i, p1 = 0, p2 = 1, p3;
    clrscr();
    printf("\nEnter the Limit: ");
    scanf("%d",&limit);
    printf("%d\t%d", p1, p2);
    for(i = 2; i<limit; i++){
        p3 = p1 + p2;
        printf("\t%d",p3);
        p2 = p3;
        printf("p2 is: %d",p2);
        p1 = p2;
        printf("p1 is: %d",p1);
    }
    getch();
}