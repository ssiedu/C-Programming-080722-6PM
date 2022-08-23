#include<stdio.h>
void exchange(int *a,int *b);
void main()
{
	int x,y;
	printf("\n Enter the value of x : ");
	scanf("%d",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	exchange(&x,&y);
	getch();
}
void exchange(int *a, int *b)
{
	*a = *a+*b;
	*b = *a-*b;
	*a = *a-*b;
	printf("\n value of a : %d",*a);
	printf("\n value of b : %d",*b);
}
