#include<stdio.h>
void main()
{
	int i;
	float f;
	char c;
	void *ptr;
	
	ptr = &i;
	i=80;
	printf("\n value of i : %d",i);//80
	printf("\n value of ptr : %d",*(int*)ptr);//80
	
	ptr = &f;
	f=12.44;
	printf("\n value of f : %.2f",f);//12.44
	printf("\n value of ptr : %.2f",*(float*)ptr);//12.44
	
	ptr = &c;
	c= 'Z';
	printf("\n value of c : %c",c);//Z
	printf("\n value of ptr : %c",*(char*)ptr);//Z
	
	getch();
}
