#include<stdio.h>
#include<conio.h>
void main(){
    int choice;
    clrscr();
    printf("\nOrder Menue!!");
    printf("\n1.Maggi..");
    printf("\n2.Burger..");
    printf("\n3.FrencFries..");
    printf("\n4.Masala Dosa..");
    printf("\n5.Paratha..");
    printf("\n\nWhat Do You Want For Snacks: ");
    printf("\n\nEnter your Choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("You Ordered Maggi.");
        break;
        case 2: printf("You Ordered Burger.");
        break;
        case 3: printf("You Ordered FrencFries.");
        break;
        case 4: printf("You Ordered Masala Dosa.");
        break;
        case 5: printf("You Ordered Paratha.");
        break;
        default: printf("Invalid Choice..!");
    }
    getch();
}