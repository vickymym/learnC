#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40
#define MAX 1024

int main()
{
	FILE *fp1,*fp2;
	char name1[LEN]={0};
	char name2[LEN]={0};
	char line[MAX]={0};
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
	
	while(fgets(line,MAX,fp1) != NULL && line[0] != '\n')
		n_line1++;
	fseek(fp1,0L,SEEK_SET);
	while(fgets(line,MAX,fp2) != NULL && line[0] != '\n')
		n_line2++;
	fseek(fp2,0L,SEEK_SET);
	
	//功能一：打印file1的第一行，打印file2的第一行，以此类推
	n_line_max = n_line1 > n_line2 ? n_line1 : n_line2;
	while(n_line_max != 0)
	{
		if(fgets(line,MAX,fp1) != NULL && line[0] != '\n')
			fputs(line,stdout);
		if(fgets(line,MAX,fp2) != NULL && line[0] != '\n')
			fputs(line,stdout);
		n_line_max--;
	}
	
	//功能二：把file1和file2相同的行打印在一行上
	fseek(fp1,0L,SEEK_SET);
	fseek(fp2,0L,SEEK_SET);
	n_line_min = n_line1 > n_line2 ? n_line2 : n_line1;
	while(n_line_min != 0)
	{
		if(fgets(line,MAX,fp1) != NULL && line[0] != '\n')
			;
		length = strlen(line);
		if(fgets(line+length-1,MAX,fp2) != NULL && line[0] != '\n')
			fputs(line,stdout);
		n_line_min--;
	}
	while(fgets(line,MAX,fp1) != NULL && line[0] != '\n')
		fputs(line,stdout);
	while(fgets(line,MAX,fp2) != NULL && line[0] != '\n')
		fputs(line,stdout);
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}