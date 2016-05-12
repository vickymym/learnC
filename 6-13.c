#include<stdio.h>
#define SIZE 8
int main()
{
	double arr1[SIZE];
	double arr2[SIZE];
	double sum;
//	int flag=0;
	_Bool flag=0;
	
	printf("enter 8 double number:");
	
	for(int i=0; i<SIZE; i++)
	{
		scanf("%lf",&arr1[i]);
		sum += arr1[i]*arr1[i];
		arr2[i] = sum;
	}
	
	for(int i=0; i<SIZE; )
	{
		if(!flag)
		{
			printf("arr1[%d]=%3.0f ",i,arr1[i]);
			i++;
			if(i == 8)
			{
				flag=1;
				printf("\n");
				i=0;
			}
		}
		else
		{
			printf("arr2[%d]=%3.0f ",i,arr2[i]);
			i++;
		}
	}
	
	printf("\n");
	
	return 0;
}