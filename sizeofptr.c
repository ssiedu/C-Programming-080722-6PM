#include<stdio.h>
void main()
{
	int i;
	float f;
	char c;
	int *iptr=&i;
	float *fptr = &f;
	char *cptr = &c;
	
	printf("\n size of integer pointer : %d",sizeof(iptr));
	printf("\n size of float pointer   : %d",sizeof(fptr));
	printf("\n size of character pointer: %d",sizeof(cptr));
	getch();
}
