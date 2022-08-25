#include<stdio.h>
void main()
{
	int i;
	float f;
	char c;
	int *iptr=NULL;
	float *fptr = NULL;
	char *cptr = NULL;
	
	iptr=&i;
	i=10;
	printf("\n value of i : %d",i);//add//10
	printf("\n value of iptr : %d",*iptr);//10
	
	fptr=&f;
	f=12.3;
	printf("\n value of f : %.2f",f);//12.30
	printf("\n value of fptr : %.2f",*fptr);//12.30
	
	cptr=&c;
	c='A';
	printf("\n value of c : %c",c);//A
	printf("\n value of cptr : %c",*cptr);//A
	
	getch();
}
