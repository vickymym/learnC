#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 80

char* string_in(char str1[], char str2[]);
char* string_in2(char str1[], char str2[]);

int main()
{
	char str1[SIZE]={0};
	char str2[SIZE]={0};
	
	while(1)
	{
		printf("please enter the first string:\n");
		gets(str1);
		printf("please enter the second string:\n");
		gets(str2);
		
		if(string_in(str1,str2))
			printf("%s\n",string_in(str1,str2));
		else
			printf("not in\n");
	}
	
	return 0;
}

//一个字符一个字符的比较
char* string_in(char str1[], char str2[])
{
	int i=0;
	int j=0;
	bool is_in=false;
	char* pflag=NULL;
	int z=-1;
	
	if(strlen(str1) >= strlen(str2))
	{
		while(*(str1+i) && *(str2+j))
		{
			if(*(str1+i) != *(str2+j))
			{
				if(is_in)
				{
					j=0;
					is_in=false;
					z=-1;
				}
				else
					i++;
			}
			else
			{
				is_in=true;
				if(z==-1)
				{
					z = i;
				}
				i++;
				j++;
			}
		}
		
		if(is_in)
			return (str1+z);
	}
	
	return NULL;
}

//字符串比较
char* string_in2(char str1[], char str2[])
{
	int n=strlen(str2);
	int i=0;
	
	while(*(str1+i) != '\0')
	{
		if(strncmp((str1+i),str2,n) != 0)
			i++;
		else
			return (str1+i);
	}
	
	return NULL;
}