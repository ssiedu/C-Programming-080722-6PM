#include<stdio.h>
void main()
{
	FILE *fp;
	int id;
	char name[20];
	float sal;
	fp=fopen("emp.txt","a");
	if(fp==NULL)
	{
		printf("\n Sorry! file does not exist");
		return ;
	}
	printf("\n Enter Employee id :");
	scanf("%d",&id);
	fprintf(fp,"Id : %d\n",id);
	
	printf("\n enter Employee Name : ");
	scanf("%s",&name);
	fprintf(fp,"Name : %s\n",name);
	
	printf("\n Enter Employee salary : ");
	scanf("%f",&sal);
	fprintf(fp,"Salary : %.2f\n",sal);
	
	fclose(fp);
	
	getch();
}
