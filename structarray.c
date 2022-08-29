#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float sal;
}e1[4];
void main()
{
	//	struct employee e1;
	int i;
	printf("\n Enter Employee Information : \n\n");
	for(i=1;i<4;i++)
	{
	printf("\n Enter Employee Id : ");
	scanf("%d",&e1[i].id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&e1[i].name);
	printf("\n Enter Employee salary : ");
	scanf("%f",&e1[i].sal);
	}
	
	printf("\n Employee Details :\n\n");
	for(i=1;i<4;i++)
	{
	printf("\n Employee Id : %d",e1[i].id);
	printf("\n Employee Name : %s",e1[i].name);
	printf("\n Employee salary : %.2f",e1[i].sal);
	}
	
	
	
	getch();
}
