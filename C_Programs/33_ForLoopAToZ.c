// Printing A to Z Alphabets.
#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    clrscr();
    printf("\nPrinting A to Z Alphabets: \n");
    for(ch='A'; ch<='Z'; ch++){
        printf("%c",ch);
    }
    getch();
}