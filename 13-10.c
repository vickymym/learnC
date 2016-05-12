#include<stdio.h>
#include<stdlib.h>
#define MAX 40
int main()
{
	char filename[MAX]={0};
	FILE *fp;
	long position=0L;
	int ch;
	
	printf("enter a file name:");
	scanf("%s",filename);
	
	if((fp=fopen(filename,"r")) == NULL)
	{
		printf("Can't open file %s.\n",filename);
		exit(1);
	}
	
	printf("enter an integer as beginning of the file:");
	while(scanf("%ld",&position) == 1)
	{
		fseek(fp,position,SEEK_SET);
		while((ch=getc(fp)) != '\n')
			putc(ch,stdout);
		fseek(fp,0L,SEEK_SET);
		printf("\nenter an other integer as beginning of the file:");
	}
	
	if(fclose(fp) != 0)
		fprintf(stderr,"Error closing.\n");
	
	return 0;
}