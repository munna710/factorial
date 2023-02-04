#include<stdio.h>
#include<conio.h>
long factorial (int);
void main()
{
	int x;
	clrscr();
	printf("enter a number: ");
	scanf("%d",&x);
	printf("\n facorial of %d is %ld",x,factorial(x));
	getch();
}
long factorial (int n)
{
	if(n==0)
	return 1;
	else
	return n*factorial(n-1);
}