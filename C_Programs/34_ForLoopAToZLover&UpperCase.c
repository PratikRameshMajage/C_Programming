// Printing A to Z Alphabets with Assich Values.
#include<stdio.h>
#include<conio.h>
void main(){
    char ch = 'a';
    clrscr();
    printf("\nPrinting a to z Upper to Lower Case: \n");
    for(ch='A'; ch<='Z'; ch++){
        printf("%c -> %d ",ch+32,ch+32);
    }
    printf("\nPrinting A to Z Lower to Upper Case: \n");
    for(ch='a'; ch<='z'; ch++){
        printf("%c -> %d",ch-32,ch-32);
    }
    getch();
}