#include<stdio.h>
void main()
{
	FILE *fp;
	char ch[30];
	fp=fopen("myfile2.txt","r");
	while((fscanf(fp,"%s",ch))!=EOF)
	{
		printf("%s",ch);
	}
	fclose(fp);
	getch();
}
