//function without argument and with return value
#include<stdio.h>
float add(); // function declaration
void main()
{
	float res;
	res=add();
	printf("\n addition is : %.2f",res);
	getch();
}
float add()
{
	float a,b,c;
	printf("\n Enter the value of a : ");
	scanf("%f",&a);
	printf("\n Enter the value of b : ");
	scanf("%f",&b);
	c=a+b;
	return c;
}
