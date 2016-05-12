#include <stdio.h>

void copy_arr(double source[], double target[], int n);
void copy_ptr(double *source, double *target, int n);

int main()
{
	double source[5]={1.1,2.2,3.3,4.4,5.5};
	double target1[5]={0.0};
	double target2[5]={0.0};
	
	printf("the source arr:\n");
	for(int i=0; i<5; i++)
		printf("source[%d]=%.2f\n",i,source[i]);
	
	printf("target1 befor copy:\n");
	for(int i=0; i<5; i++)
		printf("target1[%d]=%.2f\n",i,target1[i]);
	
	printf("target2 befor copy:\n");
	for(int i=0; i<5; i++)
		printf("target2[%d]=%.2f\n",i,target2[i]);
	
	copy_arr(source,target1,5);
	copy_ptr(source,target2,5);
	
	printf("target1 after copy:\n");
	for(int i=0; i<5; i++)
		printf("target1[%d]=%.2f\n",i,target1[i]);
	
	printf("target2 after copy:\n");
	for(int i=0; i<5; i++)
		printf("target2[%d]=%.2f\n",i,target2[i]);
	
	return 0;
}

void copy_arr(double source[], double target[], int n)
{
	for(int i=0; i<n; i++)
		target[i]=source[i];
}

void copy_ptr(double *source, double *target, int n)
{
//double *pa = source;
//	double *pb = target;
	
	for(int i=0; i<n; i++)
	{
	//	*pb = *pa;
	//	pa++;
	//	pb++;
		*(target+i) = *(source+i);
	}
}