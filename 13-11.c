#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 256

int main(int argc, char *argv[])
{
	FILE *fp;
	char line[MAX]={0};
	
	if((fp=fopen(argv[2],"r")) == NULL)
	{
		fprintf(stderr,"Can't open %s file.\n",argv[2]);
		exit(1);
	}
	
	while(fgets(line,MAX,fp) != NULL && line[0] != '\n')
	{
		if(strstr(line,argv[1]) != NULL)
			fputs(line,stdout);
	}
	
	return 0;
}