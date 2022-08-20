#include<stdio.h>
void main()
{
	int a[2][2];
	
	a[0][0] = 11;
	a[0][1] = 12;
	a[1][0] = 21;
	a[1][1] = 22;
	
	
	printf("\n  %d",a[0][0]);
	printf("\t  %d",a[0][1]);
	printf("\n  %d",a[1][0]);
	printf("\t  %d", a[1][1]);
}
