//function without argument and without return value
#include<stdio.h>
void add();  // function declaration
void main()
{
	add();   // function call
	add();
	getch();
}

void add()
{
	int a,b,c;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	c=a+b;
	printf("\n addition is : %d",c);
}
