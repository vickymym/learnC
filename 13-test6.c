#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 256

int main(int argc, char *argv[])
{
	char temp[SIZE]={0};
	FILE *fp;
	int i=0;
	long offset=0;
	
	if(argc < 3)
	{
		printf("This program need at least 3 reference!\n");
		exit(1);
	}
	
	if((fp=fopen(argv[2],"r")) == NULL)
	{
		fprintf(stderr,"Can't open %s\n",argv[2]);
		exit(1);
	}
	
	while(fgets(temp,SIZE,fp) != NULL && temp[0] != '\n')
	{
		offset=strlen(temp);
		while(temp[i] != '\0')
		{
			if(temp[i] != argv[1][0])
				i++;
			else
			{
				fputs(temp,stdout);
				break;
			}
		}
		
		i=0;
		for(int j=0; j<offset; ++j)
			temp[j]=0;
	}
	
	return 0;
}