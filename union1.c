#include<stdio.h>
union data
{
	int i;
	float f;
	char ch[10];
}d;
void main()
{
	printf("size of union : %d",sizeof(d));
	getch();
}
