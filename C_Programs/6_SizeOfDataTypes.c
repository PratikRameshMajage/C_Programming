#include<stdio.h>
#include<conio.h>
void main(){
    int a = 2;
    float b = 2.2;
    double db = 22.22;
    char ch = 'A';
    clrscr();
    //In sizeof() predefined function Always return data type is Integer(%d).
    //It ia also considered as a Keyword in C.
    printf("\nSize of Integer: %d", sizeof(int));
    printf("\nSize of Integer: %d", sizeof(a));
    printf("\nSize of Integer: %d", sizeof(float));
    printf("\nSize of Integer: %d", sizeof(b));
    printf("\nSize of Integer: %d", sizeof(double));
    printf("\nSize of Integer: %d", sizeof(db));
    printf("\nSize of Integer: %d", sizeof(char));
    printf("\nSize of Integer: %d", sizeof(ch));
    getch();
}