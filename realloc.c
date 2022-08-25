#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,n2,*ptr,i;
	printf("\n Enter array size : ");
	scanf("%d",&n1);
	ptr = (int*)malloc(n1*sizeof(int));
	printf("\n previously allocate Memory :");
	
	for(i=0;i<n1;i++)
	{
		printf("\n %u",(ptr+i));
	}
	printf("\n Enter new Size of array : ");
	scanf("%d",&n2);
	ptr = realloc(ptr,n2*sizeof(int));
	printf("\n Newly allocate Memory : ");
	for(i=0;i<n2;i++)
	{
		printf("\n %u",(ptr+i));
	}
	free(ptr);
	getch();
}
