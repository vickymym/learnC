#include <stdio.h>
#include <string.h>
#define SIZE 255

char * delete_space(char source[]);

int main()
{
	char strings[100][SIZE]={0};
	char ch;
	int i=0;
	int j=0;
	
	printf("please enter the strings:\n");
	while(ch=getchar())
	{
		if(ch == '\n')
		{
			if(j != 0)
			{
				strings[i][j]='\0';	
				i++;
				j=0;
			}
			else
				break;
		}
		else
		{
			strings[i][j]=ch;
			j++;
		}
	}
	
	for(int k=0; k<i; k++)
	{
		delete_space(strings[k]);
		puts(strings[k]);
	}
	
	return 0;
}

//只处理一行字符串，把源字数组中不是空格的字符复制到另外一个字符数组中，然后把这个字符数组再复制到源数组
char * delete_space(char source[])
{
	char temp[SIZE]={0};
	int len=strlen(source);
	int i=0;
	int j=0;
	
	for(i=0; i<len; i++)
	{
		if(*(source+i) != ' ')
		{
			temp[j] = *(source+i);
			j++;
		}
	}
	
	for(int j=0; j<strlen(temp); j++)
		*(source+j) = temp[j];
	*(source+j)='\0';
		
	return source;
}