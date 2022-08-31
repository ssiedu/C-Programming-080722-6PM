#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("myfile4.txt","w");
	fputs("Welcome to c/C++ Classes",fp);
	fclose(fp);
	getch();
}
