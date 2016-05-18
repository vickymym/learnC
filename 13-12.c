#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 127

int main()
{
	FILE *fp;
	FILE *fcp;
	int num[20][30]={0};
	char ch;
	int i=0,j=0;
	char symbol[20][31]={0};
	
	if((fp=fopen("num.txt","r")) == NULL)
	{
		fprintf(stderr,"Can't open num.txt.\n");
		exit(1);
	}

	//将num.txt中的数字读入到num int数组中
	while((ch=getc(fp)) != EOF)
	{
		if(isalnum(ch))
		{
			if(j < 30)
			{
				num[i][j]=ch-'0';
				j++;
			}
			else
			{
				j=0;
				i++;
				num[i][j]=ch-'0';
				j++;
			}			
		}
	}
	
	//使用数组中的值来初始化20*31的字符阵列
	for(int m=0; m<=i; m++)
	{
		for(int n=0; n<j; n++)
		{
			switch(num[m][n])
			{
				case 0:
						symbol[m][n]=' ';
						break;
				case 1:
						symbol[m][n]='.';
						break;
				case 2:
						symbol[m][n]='\'';
						break;
				case 3:
						symbol[m][n]=':';
						break;
				case 4:
						symbol[m][n]='~';
						break;
				case 5:
						symbol[m][n]='*';
						break;
				case 6:
						symbol[m][n]='=';
						break;
				case 7:
						symbol[m][n]='!';
						break;
				case 8:
						symbol[m][n]='%';
						break;
				case 9:
						symbol[m][n]='#';
						break;
			}
		}
		symbol[m][j]='\0';
	}
	
	//打印字符串，并将结果写入文本文件中
	if((fcp=fopen("symbol","w")) == NULL)
	{
		fprintf(stderr,"Can't open this file.\n");
		exit(1);
	}
	
	for(int m=0; m<=i; m++)
	{
		for(int n=0; n<=j; n++)
		{
			if(n % 30 != 0 || n == 0)
			{
				printf("%c",symbol[m][n]);
				putc(symbol[m][n],fcp);
			}
				
			else
			{
				printf("%c\n",symbol[m][n]);
				putc(symbol[m][n],fcp);
				putc('\n',fcp);
			}
		}
	}
	
	if(fclose(fp) != 0 || fclose(fcp) != 0)
		fprintf(stderr,"Error in closing files.\n");

	return 0;
}