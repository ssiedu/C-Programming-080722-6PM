#include<stdio.h>
void xyz();
void main()
{
	xyz();
	xyz();
	xyz();
	getch();	
}
void xyz()
{
	static int a=1;
	printf("\n value of a : %d",a);
	a++;
}
