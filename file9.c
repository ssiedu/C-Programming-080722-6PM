#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("myfile5.txt","w+");
	fputs("This is a pen",fp);
	fseek(fp,8,SEEK_SET);
	fputs("c/c++ class",fp);
	fclose(fp);
	getch();
}
