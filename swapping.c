#include<stdio.h>
void main()
{
	int x,y,temp;
	printf("\n Enter Sugar : ");
	scanf("%d",&x);
	printf("\n Enter Tea : ");
	scanf("%d",&y);
	
	x= x+y;
	y= x-y;
	x= x-y;
	
	printf("\n value of x : %d",x);
	printf("\n value of y   : %d",y);
	getch();
	
}
