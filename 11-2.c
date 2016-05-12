#include <stdio.h>
#define SIZE 255
char * input(char arr[], int n);
int main()
{
	char str[SIZE];
	char* pt=NULL;
	int n=0;
	
	printf("enter how many letters do you want?");
	scanf("%d",&n);
	while(getchar() != '\n')
		continue;
	
	pt=input(str,n);
	
	puts(pt);
	
	return 0;
}

char * input(char arr[], int n)
{
	int i=0;
	
	while(!isspace((arr[i]=getchar())) && i<n)
		i++;
	arr[i]='\0';

	return arr;
}