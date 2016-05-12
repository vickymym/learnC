#include<stdio.h>
#include<string.h>
#define SIZE 255

int main()
{
	char ch[SIZE];
	memset(ch, 0, SIZE);
	printf("enter a row:");
	
	int i=0;
	while(scanf("%c",&ch[i]))
	{
		if(ch[i] == '\n')
			break;
		i++;
	}
	
	int length=strlen(ch);
	for(int i=0; i<length; i++)
	{
		printf("%c",ch[length-i-1]);
	}
	
	printf("\n");
	
	return 0;
}