#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#define SIZE 128

int main(int argc, char *argv[])
{
	FILE *fp;
	double num=0.0;
	double sum=0.0;
	double agv=0.0;
	int count=0;
	char ch;
	char nums[100][SIZE]={0};
	bool isnum=false;
	int i=0,j=0;
	
	if(argc < 2)
	{
		while(scanf("%lf",&num) == 1)
		{
			count++;
			sum += num;
		}
		agv=sum/count;
	}
	else if(argc == 2)
	{
		fp=fopen(argv[1],"r");
		if(fp == NULL)
		{
			printf("Can't open %s\n",argv[1]);
			exit(1);
		}
		//提取
		while((ch=getc(fp)) != EOF)
		{
			if((isalnum(ch) && !isalpha(ch)) || ch == '.')
			{
				isnum = true;
				nums[i][j]=ch;
				j++;
			}
			else
			{
				isnum=false;
				nums[i][j+1]='\0';
				i++;
				j=0;
			}
		}
		//将数字字符串转化为double类型的
		for(int k=0; k<=i; k++)
			sum += atof(nums[k]);
		agv = sum/(i+1);
	}
	else
	{
		printf("at most have 2 reference!\n");
		exit(1);
	}
	
	printf("agv=%f\n",agv);
	
	return 0;
}