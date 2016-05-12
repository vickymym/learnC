#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 255
void sort(int arr[], int n);
int main()
{
	int arr[255]={0};
	int i=0;
	
	srand((unsigned int) time(0));
	for(i=0; i<100; i++)
		arr[i]=rand()%10+1;
	
	printf("befor sort:\n");
	for(int j=0; j<i; j++)
	{
		if((j+1) % 10 == 0)
			printf("arr[%d]=%d\n",j,arr[j]);
		else
			printf("arr[%d]=%d ",j,arr[j]);
	}
	if(i % 10 != 0)
		putchar('\n');
	
	sort(arr,i);
	
	printf("after sort:\n");
	for(int j=0; j<i; j++)
	{
		if((j+1) % 10 == 0)
			printf("arr[%d]=%d\n",j,arr[j]);
		else
			printf("arr[%d]=%d ",j,arr[j]);
	}
	if(i % 10 != 0)
		putchar('\n');
	
	return 0;
}

void sort(int arr[], int n)
{
	int temp=0;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

