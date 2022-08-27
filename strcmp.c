#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	printf("\n Enter str1 : ");
	gets(str1);
	printf("\n Enter str2 : ");
	gets(str2);
	if(strcmp(str1,str2)==0)
	printf("\n string are equal");
	else 
	printf("\n strings are not equal");
	getch();
	
}
