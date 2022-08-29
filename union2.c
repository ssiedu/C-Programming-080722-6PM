#include<stdio.h>
#include<string.h>
union data
{
	int i;
	float f;
	char ch[10];
}d;
void main()
{
	d.i=123;
	printf("\n valuer of int : %d",d.i);
	d.f=12.34;
	printf("\n value of float : %.2f",d.f);
	strcpy(d.ch,"Ram");
	
	
	
	printf("\n value of char : %s",d.ch);
	getch();
}
