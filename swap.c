#include<stdio.h>
void main()
{
	int sugar,tea,jar;
	printf("\n Enter Sugar : ");
	scanf("%d",&sugar);
	print("\n Enter Tea : ");
	scanf("%d",&tea);
	jar = sugar;
	sugar = tea;
	tea = jar;
	printf("\n value of sugar : %d",sugar);
	printf("\n value of tea   : %d",tea);
	getch();
	
}
