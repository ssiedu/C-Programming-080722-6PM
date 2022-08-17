//function with argument and with return value
#include<stdio.h>
float add(float a, int b);
void main()
{
	float x,res;
	int y;
	printf("\n Enter the value of x : ");
	scanf("%f",&x);
	printf("\n Enter the value of y : ");
	scanf("%d",&y);
	
	res = add(x,y);
	printf("\n addition is : %.2f",res);
	getch();
}
float add(float a, int b)
{
	return a+b;
}
