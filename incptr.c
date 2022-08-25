#include<stdio.h>
void main()
{
	 int a=78;
	 int *ptr=&a;
	 printf("\n address of ptr : %u",ptr);
	 //ptr = ptr+1;//ptr++
	 ptr--;
	 printf("\n address of ptr : %u",ptr);
	 getch();
}
