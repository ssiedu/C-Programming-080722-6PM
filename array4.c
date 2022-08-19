#include<stdio.h>
void main()
{
	int a[20];
	int n,i;
	printf("\n Enter the size of array : ");
	scanf("%d",&n);
	printf("\n Enter array elements : \n");
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]  : ",i);
		scanf("%d",&a[i]);	
	}
	printf("\n Array Element Are : \n");
	for(i=0;i<n;i++)
	{
		printf("\n   a[%d] :  %d",i,a[i]);
	}
	getch();
}
