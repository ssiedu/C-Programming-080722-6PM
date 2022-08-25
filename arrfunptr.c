#include<stdio.h>
int add(int a , int b);
int sub(int a , int b);
int mul(int a , int b);
int div(int a , int b);
void main()
{
	int x=10,y=5,res;
	int (*fp[4])(int , int);
	
	fp[0] = &add;
	fp[1] = &sub;
	fp[2] = &mul;
	fp[3] = &div;
	
	res = (*fp[0])(x,y);
	printf("\n sum is : %d",res);
	
	res = (*fp[1])(x,y);
	printf("\n sub is : %d",res);
	
	res = (*fp[2])(x,y);
	printf("\n Mul is : %d",res);
	
	res = (*fp[3])(x,y);
	printf("\n div is : %d",res);
	
	getch();	
	
}
int add(int a, int b)
{
	return a+b;
}
int sub(int a , int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return a/b;
}
