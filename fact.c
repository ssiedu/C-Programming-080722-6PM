#include<stdio.h>
void main()
{
	int i,n,fact=1;
	printf("\n Enter Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact= fact*i;//1*1=1// 1*2=2 // 2*3 = 6 // 6*4=24 // 24 *5 =120
	
	}
		printf("\n factorial is : %d",fact);
		getch();
	
}
