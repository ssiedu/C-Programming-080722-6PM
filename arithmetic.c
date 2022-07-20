//Arithmetic operator
#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter the value of a and b : ");
	scanf("%d%d",&a,&b);
	printf("\n Addition is       :%d",(a+b));
	printf("\n subtraction is    : %d",(a-b));
	/*printf("\n Multiplication is : %d",(a*b));
	printf("\n Division is       : %.2f",(float)a/b);*/
	printf("\n Modulus is        : %d",(a%b));
	getch();
}



