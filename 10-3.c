#include<stdio.h>

int max(int arr[], int n);

int main()
{
	int arr[5]={2,1,5,3,1};
	int num=max(arr,5);
	
	printf("the max number is %d\n",num);
	
	return 0;
}

int max(int arr[], int n)
{
	int m = arr[0];
	
	for(int i=0; i<n; i++)
	{
		if(m < arr[i])
			m = arr[i];
	}
	
	return m;
}