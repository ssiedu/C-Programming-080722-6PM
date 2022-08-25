#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5};
	int *ptr = &arr;
	int i;
	printf("\n Array Elements :\n\n");
	for(i=0;i<5;i++)
	{
		printf("\n%d",*(ptr+i));
	}
}
