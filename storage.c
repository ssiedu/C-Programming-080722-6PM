#include<stdio.h>
int x=20;
void main()
{
	//int x=10;
	{
		int x=5;
		printf("\n value of c in block : %d",x);//5
	}
	printf("\n value of x : %d",x);//10//5
	getch();
}
