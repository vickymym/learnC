#include <stdio.h>
#define SIZE 255
char * input(char arr[], int n);
int main()
{
	char str[SIZE];
	int n;
	
	printf("enter the letters of your string:\n");
	scanf("%d",&n);
	while(getchar() != '\n')
		continue;
	
	input(str,n);
	
	puts(str);
	
	return 0;
}

char * input(char arr[],int n)
{
	for(int i=0; i<n; i++)
	{
		arr[i]=getchar();
	}
	arr[n]='\0';

	return arr;
}