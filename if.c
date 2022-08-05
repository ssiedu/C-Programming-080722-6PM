#include<stdio.h>
void main()
{
	int age;
	printf("\n Enter Age : ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\n Person is elligible for vote");
	}
	else
	{
		printf("\n Person is not elligible for vote");
	}
	getch();
	
}
