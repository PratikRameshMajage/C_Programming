#include<stdio.h>
#include<conio.h>
void factorial(int);
void fibonacci(int);
void armstrong(int);
void palindrome(int);

void main(){
	int num1,num2,num3,num4;
	clrscr();
	printf("\nEnter the Factorial Number: ");
	scanf("%d",&num1);
	factorial(num1);
	printf("\n");

	printf("\nEnter the Fibonacci Number: ");
	scanf("%d",&num2);
	fibonacci(num2);
	printf("\n");

	printf("\nEnter the Armstrong Number: ");
	scanf("%d",&num3);
	armstrong(num3);
	printf("\n");

	printf("\nEnter the Palindrome Number: ");
	scanf("%d",&num4);
	palindrome(num4);
	printf("\n");

	getch();
}

void factorial(num){
	int fact = 1;
	int i;
	for(i=1; i<=num; i++){
		fact = fact * i;
	}
	printf("\n -> factorial of %d is %d", num, fact);
}

void fibonacci(num){
	int p1 = 0;
	int p2 = 1;
	int p3, i;
	printf("\n -> %d\t%d\t",p1,p2);
	for(i=2;i<=num;i++){
		p3 = p1+p2;
		printf("%d\t",p3);
		p1 = p2;
		p2 = p3;
	}
}

void armstrong(num){
	int temp = num;
	int sum = 0;
	int rem;
	while(num>0){
		rem = num%10;
		sum += (rem*rem*rem);
		num/=10;
	}
	if(temp==sum){
		printf("\n -> %d is Armstrong number.",sum);
	}else{
		printf("\n -> %d is not Armstrong number.",temp);
	}
}

void palindrome(num){
	int temp = num;
	int sum = 0;
	int rem;
	while(num>0){
		rem = num%10;
		sum = rem+(sum*10);
		num/=10;
	}
	if(temp == sum){
		printf("\n -> %d is Palindrome number.",sum);
	}else{
		printf("\n -> %d is not Palindrome number.",temp);
	}
}