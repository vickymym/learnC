#include<stdio.h>

void plus(int arr1[], int arr2[], int arr3[], int n);

int main()
{
	int arr1[4]={2,4,5,8};
	int arr2[4]={1,0,4,6};
	int arr3[4]={0};
	
	plus(arr1,arr2,arr3,4);
	
	for(int i=0; i<4; i++)
		printf("arr3[%d]=%d\n",i,arr3[i]);
	
	return 0;
}

void plus(int arr1[], int arr2[], int arr3[], int n)
{
	for(int i=0; i<n; i++)
		arr3[i] = arr1[i] + arr2[i];
}