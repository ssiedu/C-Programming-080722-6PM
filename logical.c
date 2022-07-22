#include<stdio.h>
void main()
{
	int a=12,b=50;
	printf("\n Logical AND           : %d",(a>b)&&(a<=b));//0
	printf("\n Logical AND with NOt  : %d",(a<b) && !(a>=b));//1
	printf("\n Logical OR            : %d",(a>b)||(a<=b));//1
	printf("\n Logical OR with Not   : %d",!(a>b)||(a<=b));//1
	printf("\n Logical Not           : %d",!(a==b));//1
	printf("\n Logical Not           : %d",!(a>=b));//1
	getch();
	
}
