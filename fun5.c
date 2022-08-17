//function with argument and without return value
#include<stdio.h>
void add(int , int ); //formal argument

void main()
{
	int a,b;// actual argument
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	
	add(a,b);
	getch();
}
void add(int a , int b )
{
	printf("\n value of a : %d",a);
	printf("\n value of b : %d",b);
	printf("\n addition is : %d",a+b);
}
