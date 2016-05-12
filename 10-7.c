#include <stdio.h>

void copy_arr(double source[], double target[], int n);
void copy_ptr(double *source, double *target, int n);

int main()
{
	double source[7]={1.0,4.0,2.0,6.0,3.0,5.0,7.0};
	double target[3]={0};
	
	printf("befor copy:\n");
	for(int i=0; i<3; i++)
		printf("target[%d]=%.1f\n",i,target[i]);
	
//	copy_arr(source+2,target,3);
	copy_ptr(source+2,target,3);
	
	printf("after copy:\n");
	for(int i=0; i<3; i++)
		printf("target[%d]=%.1f\n",i,target[i]);
	
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