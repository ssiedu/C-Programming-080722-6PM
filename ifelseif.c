#include<stdio.h>
void main()
{
	int a, b,c;
	printf("\n Enter the value of a : ");
	scanf("%d",&a);//61
	printf("\n Enter the value of b : ");
	scanf("%d",&b);//53
	printf("\n Enter the value of c : ");
	scanf("%d",&c);//89
	if(a>b && a>c)
	printf("\n a is greater than b and c");
	else if (b>c)
	printf("\n b is greater than a and c");
	else
	printf("\n c is greater than a and b");
	getch();
}
