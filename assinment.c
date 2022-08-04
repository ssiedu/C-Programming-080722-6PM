#include<stdio.h>
void main()
{
	int a=10;
	int b=5;
	a+=b;//a=a+b
	printf("\n value of a: %d and b: %d",a,b);//a=15  b=5
	a-=b;//a=a-b
	printf("\n value of a: %d and b: %d",a,b);//a=10/5  b=5
	a*=b;
	printf("\n value of a: %d and b: %d",a,b);//a=50 b=5
	getch();
}
