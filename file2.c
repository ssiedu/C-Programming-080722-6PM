#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("myfile2.txt","w");
	fprintf(fp,"Welcome to ssi digital!");
	fclose(fp);
	getch();
}
