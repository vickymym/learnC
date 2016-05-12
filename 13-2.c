#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	FILE *srcfp;
	FILE *tarfp;
	int ch;
	
	if(argc != 3)
	{
		printf("Usage:%s src filename,%s tar filename",argv[1],argv[2]);
		exit(1);
	}
	if((srcfp=fopen(argv[1],"r")) == NULL)
	{
		printf("Can't open %s\n",argv[1]);
		exit(1);
	}
	if((tarfp=fopen(argv[2],"w")) == NULL)
	{
		printf("Can't open %s\n",argv[2]);
		exit(1);
	}
	
	while((ch=getc(srcfp)) != EOF)
		putc(ch,tarfp);
	
	fclose(srcfp);
	fclose(tarfp);
	
	return 0;
}