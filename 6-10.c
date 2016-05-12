#include<stdio.h>
#define SIZE 8

int main()
{
	int arr[SIZE];
	
	printf("enter 8 integer:\n");
	
	for(int i=0; i<SIZE; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<SIZE; i++)
	{
		printf("%d",arr[SIZE-1-i]);
	}
	
	printf("\n");
	
	return 0;
}