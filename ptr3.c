#include<stdio.h>
void main()
{
	int num;
	int *ptr = &num;
	
	printf("\n Enter Any Number : ");
	scanf("%d",&num);
	//ptr=&num;
	printf("\n square of a number is : %d",*ptr * *ptr);
	getch();
}
