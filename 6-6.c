#include<stdio.h>
#include<string.h>
#define SIZE 20

int main()
{
	char str[SIZE];
	
	printf("enter a string:");
	scanf("%s",str);
	
	int length=strlen(str);
	
	for(int i=0; i<length; i++)
	{
		printf("%c",str[length-i-1]);
	}
	
	printf("\n");
	
	return 0;
}