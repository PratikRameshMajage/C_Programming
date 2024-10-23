#include<stdio.h>
#include<conio.h>
void main(){
    int count1 = 1;
    int count2 = 1;
    int i;
    clrscr();
    struct Employee{
        int id;
        double sallary;
        char name[10];  // collection of charecters is known as String
    }
    struct Employee e5[3];  // Array of Structure - size is 3 
    printf("Enter Employee Details: - ");
    for(i=0;i<=2;i++){
        printf("Enter Employee Id: ");
        scanf("%d"&count);
        printf("Enter Employee Sallary: ");
        scanf("%lf"&e5[i]);
        printf("Enter Employee Name: ");
        scanf("%s"&e5[i]);
        count++
    }
    printf("This is Entered Employee Details: - ");
    for(i=0;i<=2;i++){
        printf("Enter Employee Id: %d",count);
        printf("Enter Employee Sallary:  %lf",e5[i]);
        printf("Enter Employee Name:  %s",e5[i]);
        count++;
    }
    getch();
}