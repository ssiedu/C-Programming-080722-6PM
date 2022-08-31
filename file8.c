#include<stdio.h>
void main()
{
	FILE *fp;
	char buff[30];
	fp=fopen("myfile4.txt","r");
	printf("%s",fgets(buff,30,fp));
	fclose(fp);
	getch();
	
}
