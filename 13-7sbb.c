#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define LEN 40
#define MAX 1024

int main()
{
	FILE *fp1,*fp2;
	char name1[LEN]={0};
	char name2[LEN]={0};
	char line[MAX]={0};
	char line2[MAX]={0};
	int n_line1 = 0;
	int n_line2 = 0;
	int n_line_max=0;
	int n_line_min=0;
	int length=0;
	
	printf("enter the first file name:\n");
	scanf("%s",name1);
	printf("enter the second file name:\n");
	scanf("%s",name2);
	
	if((fp1=fopen(name1,"r")) == NULL)
	{
		fprintf(stderr,"Can't open file %s\n",name1);
		exit(1);
	}
	if((fp2=fopen(name2,"r")) == NULL)
	{
		fprintf(stderr,"Can't open file %s\n",name2);
		exit(1);
	}
	bool res1 = false;
	bool res2 = false;
	
	if(fgets(line,MAX,fp1) != NULL && line[0] != '\n')
	{
		res1 = true;
	}
	
	if(fgets(line2,MAX,fp2) != NULL && line2[0] != '\n')
	{
		res2 = true;
	}
	
	while(res1 && res2)
	{
		fputs(line,stdout);
		fputs(line2,stdout);
		
		res1 = false;
		res2 = false;
		if(fgets(line,MAX,fp1) != NULL && line[0] != '\n')
		{
			res1 = true;
		}
		
		if(fgets(line2,MAX,fp2) != NULL && line2[0] != '\n')
		{
			res2 = true;
		}
	}
	
	if(res1)
	{
		fputs(line,stdout);
		while(fgets(line,MAX,fp1) != NULL && line[0] != '\n')
		{
			fputs(line,stdout);
		}
	}
	
	if(res2)
	{
		fputs(line2,stdout);
		while(fgets(line2,MAX,fp2) != NULL && line2[0] != '\n')
		{
			fputs(line2,stdout);
		}
	}
	
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}