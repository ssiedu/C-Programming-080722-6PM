#include<stdio.h>
void main()
{
	int num1,num2;
	printf("\n Enter Number 1 : ");
	scanf("%d",&num1);
	printf("\n Enter Number 2 : ");
	scanf("%d",&num2);
	if(num1>num2)
		printf("\n %d is greater than %d",num1,num2);
	
	else
	printf("\n %d is greater than %d",num2,num1);
	
	getch();
}
