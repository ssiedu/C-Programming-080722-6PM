#include<stdio.h>
void main()
{
	int num=50;
	int *ptr = &num;
	int **pptr = &ptr;
	int ***ppptr = &pptr;
	int ****pppptr = &ppptr;
	
	printf("\n value of number : %d",num);
	printf("\n value of ptr    : %d",*ptr);
	printf("\n value of pptr   : %d",**pptr);
	printf("\n value of ppptr  : %d",***ppptr);
	printf("\n value of pppptr : %d",****pppptr);
	printf("\n\n");
	printf("\n value of number : %u",&num);
	printf("\n value of ptr    : %u",&ptr);
	printf("\n value of pptr   : %u",&pptr);
	printf("\n value of ppptr  : %u",&ppptr);
	printf("\n value of pppptr : %u",&pppptr);
	getch();
}
