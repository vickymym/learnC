#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#define SIZE 255

int atoi(char string[]);

int main()
{
	char string[SIZE];
	int num;
	
	gets(string);
	num=atoi(string);
	
	printf("num=%d\n",num);
	
	return 0;
}

int atoi(char string[])
{
	char num[SIZE];
	int len=strlen(string);
	int k=0;
	bool flag=false;
	int number=0;
	
	for(int i=0; i<len; i++)
	{
		if(isalnum(string[i]) && !isalpha(string[i]))
		{
			num[k]=string[i];
			k++;
			flag=true;
		}
	}	
	num[k]='\0';
	
	if(!flag)
		number=0;
	else
	{
		for(int i=0; i<k; i++)
			number += (num[i]-'0')*pow(10,k-1-i);
	}	
	
	return number;
}
