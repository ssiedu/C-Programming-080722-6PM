#include<stdio.h>
void main()
{
	int num;
	printf("\n Enter number : ");
	scanf("%d",&num);
	if(num==0)
	printf("\n number is zero");
	else if(num%2==0)
	printf("\n Number is an even");
	else
	printf("\n Number is an odd");
	getch();
}
