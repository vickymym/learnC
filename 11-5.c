#include <stdio.h>

int is_within(char ch, char* ptr);

int main()
{
	int n=0;
	char arr[40];
	char ch;
	
	while(1)
	{
		printf("enter a string:\n");
		gets(arr);
		printf("enter a char you want to find:\n");
		ch=getchar();
		while(getchar() != '\n')
			continue;
		n=is_within(ch,arr);
		
		if(n)
			printf("%c is in %s\n",ch,arr);
		else
			printf("%c isn't in %s\n",ch,arr);
	}
	
	return 0;
}

int is_within(char ch, char* ptr)
{	
	while(*ptr)
	{
		if(*ptr != ch)
			ptr++;
		else
			return 1;
	}

	return 0;
}