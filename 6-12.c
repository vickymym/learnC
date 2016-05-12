#include<stdio.h>
#include<math.h>
#define SIZE 8
int main()
{
	int arr[SIZE];
	
	for(int i=0; i<SIZE; i++)
	{
		arr[i] = pow(2,i+1);
	}
	
	int i=0;
	do
	{
		printf("%d ",arr[i]);
		i++;
	}while(i<SIZE);
	
	printf("\n");
	
	return 0;
}