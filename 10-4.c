#include<stdio.h>

int max_index(double arr[], int n);

int main()
{
	double arr[5]={2.0,1.0,5.0,3.0,1.0};
	int num=max_index(arr,5);
	
	printf("the max number's index is %d\n",num);
	
	return 0;
}

/*
int max_index(double arr[], int n)
{
	double m = arr[0];
	int index=0;
	
	for(int i=0; i<n; i++)
	{
		if(m < arr[i])
		{
			m = arr[i];
			index = i;
		}
	}
	
	return index;
}
*/

int max_index(double arr[], int n)
{
	int max=0;
	
	for(int i=1; i<n; i++)
	{
		if(arr[max] < arr[i])
			max = i;
	}
	
	return max;
}