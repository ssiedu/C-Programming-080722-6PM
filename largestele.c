#include<stdio.h>
void main()
{
	int arr[10] ;
	int i,n;
	printf("\n Enter size of array : ");
	scanf("%d",&n);
	printf("\n Enter Array Elements : \n\n");
	for(i=0;i<n;i++)  
	{
		scanf("%d",&arr[i]); 
	}
	for(i=0;i<n;i++)
	{
		if(arr[0]<arr[i])
		{
			arr[0] = arr[i]; 
		}
	}
	printf("\n Largest number in array : %d",arr[0]);
	
	getch();
}
