#include<stdio.h>
#include<stdlib.h>
#define SIZE 127

int main()
{
	char file_name[SIZE]={0};
	int ch;
	FILE *fp;
	long count=0;
	
	printf("please enter thr file's name:\n");
	scanf("%s",file_name);
	
	if((fp=fopen(file_name,"r")) == NULL)
	{
		printf("Can't open %s\n",file_name);
		exit(1);
	}
	while((ch=getc(fp)) != EOF)
	{
		putc(ch,stdout);
		count++;
	}
	fclose(fp);
	printf("File %s has %ld characters\n",file_name,count);
	
	return 0;
}