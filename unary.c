#include<stdio.h>
void main()
{
	int x=4;
	int y;
	//y= x++;
	//y=++x;
	//y=--x;
	y=x--;
	printf("\n value of x : %d",x);//5//3//3
	printf("\n value of y : %d",y);//4//3//4
	getch();
}
