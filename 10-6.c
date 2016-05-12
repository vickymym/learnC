#include <stdio.h>

void copy_arr(double source[], double target[], int n);
void copy_ptr(double *source, double *target, int n);

int main()
{
	double source[2][3]={{1.0,3.0,2.0},{5.0,4.0,6.0}};
	double target[2][3]={0};
	
	printf("befor copy:\n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
			printf("target[%d][%d]=%.1f\n",i,j,target[i][j]);
	}
	
//	copy_arr(*source,*target,6);
	copy_ptr(*source,*target,6);
	
	printf("after copy:\n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
			printf("target[%d][%d]=%.1f\n",i,j,target[i][j]);
	}
	
	return 0;
}

void copy_arr(double source[], double target[], int n)
{
	for(int i=0; i<n; i++)
		target[i]=source[i];
}

void copy_ptr(double *source, double *target, int n)
{
	double *pa = source;
	double *pb = target;
	
	for(int i=0; i<n; i++)
	{
		*pb = *pa;
		pa++;
		pb++;
	}
}