#include<stdio.h>
void main()
{
	int num1,num2,res,ch;
	printf("\n Enter Number 1 : ");
	scanf("%d",&num1);
	printf("\n Enter Number 2 : ");
	scanf("%d",&num2);
	printf("\n1. Add \n2. Sub\n3. Mul \n4. Div");
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: res= num1+num2;
				printf("\n addition is : %d",res);
				break;
		case 2: res= num1-num2;
				printf("\n Subtraction is: %d",res);
				break;
		case 3: res= num1*num2;
				printf("\n Multiplication is : %d",res);
				break;
		case 4: res= num1/num2;
				printf("\n Division is : %d",res);
				break;
		default : printf("\n Invalid choice");
				  break;
	}
	getch();
	
}
