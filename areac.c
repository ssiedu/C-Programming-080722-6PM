#include<stdio.h>
void main()
{
	int r;
	float area,pi=3.14;
	printf("\n Enter radius : ");
	scanf("%d",&r);
	area = pi*r*r;
	printf("\n area of circle : %.2f",area);
	getch();	
}
