#include<stdio.h>
int factorial(int n);
void main()
{
	int num,res ;
	printf("\n Enter number : ");
	scanf("%d",&num);
	res = factorial(num);
	printf("\n factorial is : %d",res);
	getch();
}
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	return fact;
}

