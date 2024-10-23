#include<stdio.h>
#include<conio.h>
void main(){
    char choice;
    clrscr();
    printf("Enter your Choice: ");
    printf("A.Armstrong Number: ");
    printf("B.Palimdrome Number: ");
    printf("C.Factorail Number: ");
    printf("D.Fibonacci Number: ");
    printf("E.A to Z Convert Into Lower Case : ");
    printf("F.a to z  Vovels Convert Into Capital Case : ");
    printf("G.Pyramid Triangle: ");
    scanf("%c",&choice);
    switch(choice){
        case 'a': printf("Armstrong Number: ");
                break;
        case 'b': printf("Palinddrome Number: ");
                break;
        case 'c': printf("Factorail Number: ");
                break;
        case 'd': printf("Fibonacci Number Series: ");
                break;
        case 'e': printf("A to Z Convert Into Lower Case : ");
                break;
        case 'f': printf("a to z  Vovels Convert Into Capital Case : ");
                break;
        case 'g': printf("Pyramid Triangle: ");
                break;
    }
    getch();
}