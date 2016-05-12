#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define SIZE 255

void show_menu();
void print_strings(char strings[][SIZE], int n);
void print_strings_ASCII(char strings[][SIZE], int n);
void print_strings_strlen(char strings[][SIZE], int n);
void print_strings_fwstrlen(char strings[][SIZE], int n);

int main()
{
	int select=-1;
	char strings[100][SIZE]={0};
	char ch;
	int strings_count=0;
	int i=0;
	int j=0;
	
	//input strings
	while((ch=getchar()) != EOF)//windows下的EOF是ctrl+z
	{
		if(ch != '\n')
		{
			strings[i][j]=ch;
			j++;
		}
		else
		{
			if(j != 0)
			{
				strings_count++;
				i++;
				j=0;
				if(strings_count == 10)
					break;
			}
		}
	}
		
	show_menu();
	printf("please select the choice:\n");
	scanf("%d",&select);
	while(getchar() != '\n')
		continue;
	while(select != 5)
	{
		switch(select)
		{
			case 1:
					print_strings(strings,i);
					break;
			case 2:
					print_strings_ASCII(strings,i);
					break;
			case 3:
					print_strings_strlen(strings,i);
					break;
			case 4:
					print_strings_fwstrlen(strings,i);
					break;
			default:
					printf("please enter 1-5 such as:1\n");
					break;
		}
		show_menu();
		printf("please select the choice again:\n");
		scanf("%d",&select);
		while(getchar() != '\n')
			continue;
	}
	
	printf("Bye\n");
	
	return 0;
}

void show_menu()
{
	printf("***************************************************************\n");
	printf("1.put out the strings\n");
	printf("2.put out the strings order by the ASCII\n");
	printf("3.put out the strings order by the strings' length\n");
	printf("4.put out the strings order by the first word's length\n");
	printf("5.quit\n");
	printf("***************************************************************\n");
}

void print_strings(char strings[][SIZE], int n)
{
	for(int k=0; k<n; k++)
		puts(strings[k]);
}

void print_strings_ASCII(char strings[][SIZE], int n)
{
	char target[100][SIZE]={0};
	char temp[100][SIZE]={0};
	
	for(int i=0; i<n; i++)
		strcpy(target[i],strings[i]);

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if(strcmp(target[i],target[j]) < 0)
			{
				strcpy(temp[0],target[j]);
				strcpy(target[j],target[i]);
				strcpy(target[i],temp[0]);
			}
		}
	}	
	
	for(int i=0; i<n; i++)
		puts(target[i]);
	
}

void print_strings_strlen(char strings[][SIZE], int n)
{
	char target[100][SIZE]={0};
	char temp[100][SIZE]={0};
	
	for(int i=0; i<n; i++)
		strcpy(target[i],strings[i]);

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if(strlen(target[i]) < strlen(target[j]))
			{
				strcpy(temp[0],target[j]);
				strcpy(target[j],target[i]);
				strcpy(target[i],temp[0]);
			}
		}
	}	
	
	for(int i=0; i<n; i++)
		puts(target[i]);
}

void print_strings_fwstrlen(char strings[][SIZE], int n)
{
	char target[100][SIZE]={0};
	char words[100][SIZE]={0};
	int k=0;
	bool isword=false;
	char temp[100][SIZE]={0};
	char temp_words[100][SIZE]={0};
	
	for(int i=0; i<n; i++)
		strcpy(target[i],strings[i]);
	
	//把每行字符串中的第一个单词找出来，放在words数组中
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<strlen(target[i]); j++)
		{
			if(!isspace(target[i][j]))
			{
				isword=true;
				words[i][k]=target[i][j];
				k++;
			}
			else
			{
				if(isword)
				{	
					words[i][k]='\0';
					k=0;
					isword=false;
					break;
				}
			}
		}
		if(isword)
		{
			words[i][k]='\0';
			k=0;
			isword=false;
		}
	}

	//冒泡排序法排列第一个字符串长度最小
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			if(strlen(words[i]) < strlen(words[j]))
			{
				strcpy(temp_words[0],words[j]);
				strcpy(words[j],words[i]);
				strcpy(words[i],temp_words[0]);
				
				strcpy(temp[0],target[j]);
				strcpy(target[j],target[i]);
				strcpy(target[i],temp[0]);
			}
		}
	}
	
	for(int i=0; i<n; i++)
		puts(target[i]);
}



