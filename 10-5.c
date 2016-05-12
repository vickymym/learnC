#include <stdio.h>

double func(double arr[], int n);

int main()
{
	double arr[5]={2.0,1.0,5.0,3.0,1.0};
	double dif;
	
	dif=func(arr,5);
	printf("the max dif the min is %.1f\n",dif);
	
	return 0;
}

double func(double arr[], int n)
{
	double max = arr[0];
	double min = arr[0];
	double dif;
	
	for(int i=0; i<n; i++)
	{
		if(max < arr[i])
			max = arr[i];
		if(min > arr[i])
			min = arr[i];
	}
	
	dif = max - min;
	
	return dif;
}

