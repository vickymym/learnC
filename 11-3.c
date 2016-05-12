#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdbool.h>
#define SIZE 255

void get_first_word(char strings[][SIZE], int n);

int main()
{
	char strings[100][SIZE]={0};
	int i=0;
	
	while(i < 3)
	{
		gets(strings[i]);
		i++;
	}

	get_first_word(strings,i);
	
	return 0;
}

void get_first_word(char strings[][SIZE], int n)
{
	char words[100][SIZE]={0};
	int k=0;
	bool flag=false;

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<strlen(strings[i]); j++)
		{
			if(!isspace(strings[i][j]))
			{
				words[i][k]=strings[i][j];
				k++;
				flag=true;
			}
			else
			{
				if(flag)
				{
					words[i][k]='\0';
					k=0;
					flag=false;
					break;
				}
			}
		}
		//在下一行判断开始之前一定要回到最原始的状态那就是k=0，flag=false
		if(flag)
		{
			words[i][k]='\0';
			k=0;
			flag=false;
		}
	}
	
	for(int i=0; i<n; i++)
		puts(words[i]);
}

