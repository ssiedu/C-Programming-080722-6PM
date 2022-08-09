#include<stdio.h>
void main()
{
	int i,n,s;
	printf("\n Enter limit : ");
	scanf("%d",&n);
	printf("\n Enter start Limit : ");
	scanf("%d",&s);
	printf("\n Natural Number : \n\n\n");
	for(i=s;i<=n;i++)
	{
		printf("%d\t",i);
	}
	getch();
}
