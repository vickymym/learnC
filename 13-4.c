#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int ch;
	int i=1;
	
	if(argc < 2)
	{
		printf("The program need at least 2 arguments\n");
		exit(1);
	}
	
	while((argc-1) != 0)
	{
		if((fp=fopen(argv[i],"r")) == NULL)
		{
			printf("Can't open %s\n",argv[1]);
			break;
		}
		while((ch=getc(fp)) != EOF)
			putc(ch,stdout);
		i++;
		argc--;
	}
	
	return 0;
}