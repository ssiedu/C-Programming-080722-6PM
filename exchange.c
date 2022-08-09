#include<stdio.h>
void main()
{
	int x,y,temp;
	printf("\n Enter Sugar : ");
	scanf("%d",&x);
	printf("\n Enter Tea : ");
	scanf("%d",&y);
	temp = x;
	x = y;
	y = temp;
	printf("\n value of x : %d",x);
	printf("\n value of y   : %d",y);
	getch();
	
}
