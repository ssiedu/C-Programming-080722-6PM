#include<stdio.h>
void main()
{
	int a,b;
	int *ptr=NULL;
	if(ptr==NULL)
	{
		ptr=&a;
		a=10;
	}
	if(ptr==NULL)
	{
		ptr=&b;
		b=20;
	}
	printf("\n value of ptr : %d",*ptr);//10//20
	getch();
	
	
}
