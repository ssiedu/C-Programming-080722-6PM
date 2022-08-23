#include<stdio.h>
void main()
{
	int num=35;
	int *ptr;
	ptr=&num;
	printf("\n value of number : %d",num);
	printf("\n address of number : %u",&num);
	printf("\n value of ptr : %u",ptr);
	printf("\n value of pointing to ptr : %d",*ptr);
	getch();
}
