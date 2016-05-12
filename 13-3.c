#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define SIZE 127

int main()
{
	char srcname[SIZE]={0};
	char tarname[SIZE]={0};
	FILE *srcfp;
	FILE *tarfp;
	int ch;
	
	printf("please enter the source filename:");
	scanf("%s",srcname);
	printf("please enter the target filename:");
	scanf("%s",tarname);
	
	if((srcfp=fopen(srcname,"r")) == NULL)
	{
		printf("Can't open %s\n",srcname);
		exit(1);
	}
	if((tarfp=fopen(tarname,"w")) == NULL)
	{
		printf("Can't open %s\n",tarname);
		exit(1);
	}
	
	while((ch=getc(srcfp)) != EOF)
		putc(toupper(ch),tarfp);
	
	fclose(srcfp);
	fclose(tarfp);
	
	return 0;
}