#include<stdio.h>
void main()
{
	int a,b,r;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);
	printf("\n Enter the value of b : ");
	scanf("%d",&b);
	
	r = (a>b) ? a : b ;
	 
	printf("\n Largest Number is : %d",r);
	getch();
}
