#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40

int main()
{
	FILE *in,*out;
	int ch;
	int count=0;
	char src_name[LEN]={0};
	char des_name[LEN]={0};
	
	printf("please enter the source file name:\n");
	scanf("%s",src_name);
	
	strcpy(des_name,src_name);
	strcat(des_name,".red");
	
	if((in=fopen(src_name,"r")) == NULL)
	{
		fprintf(stderr,"Can't open %s file\n",src_name);
		exit(2);
	}
	if((out=fopen(des_name,"w")) == NULL)
	{
		fprintf(stderr,"Can't open %s file\n",des_name);
		exit(3);
	}
	
	while((ch=getc(in)) != EOF)
	{
		if(count++ % 3 == 0)
			putc(ch,out);
	}
	
	if(fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr,"Error in closing files\n");
	
	return 0;
}