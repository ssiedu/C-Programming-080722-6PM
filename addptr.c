#include<stdio.h>
void main()
{
	 int a=78;
	 int b=45;
	 int *ptr=&a;
	 int *ptr1 = &b;
	 printf("\n address of ptr : %u",ptr);
	 printf("\n address of ptr1 : %u",ptr1);
	 //ptr=ptr+3;
	 //ptr=ptr-4;
	 ptr = ptr-ptr1;
	 printf("\n address of ptr : %u",ptr);
	 printf("\n address of ptr1 : %u",ptr1);
	 getch();
}
