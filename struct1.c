#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[20];
	float sal;
};
void main()
{
	struct employee e1,e2;
	
	e1.id=101;
	strcpy(e1.name,"Ram");
	e1.sal = 45000.89;
	
	e2.id=102;
	strcpy(e2.name,"shyam");
	e2.sal = 47000.89;
	
	printf("\n Employee Id : %d",e1.id);
	printf("\n Employee name : %s",e1.name);
	printf("\n Employee salary : %.2f",e1.sal);
	
	printf("\n Employee Id : %d",e2.id);
	printf("\n Employee name : %s",e2.name);
	printf("\n Employee salary : %.2f",e2.sal);
	getch();
}
