#include<stdio.h>
void main()
{
	int i,n;
	printf("\n Enter Limit : ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("%d\t",i);
		//printf("\nHello");
		i++;
	}
	getch();
}
