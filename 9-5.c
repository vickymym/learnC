#include<stdio.h>

void large_of(double *pa, double *pb);

int main()
{
	double num1=2.3;
	double num2=5.6;
	
	printf("former num1=%f,num2=%f\n",num1,num2);
	large_of(&num1,&num2);
	printf("after num1=%f,num2=%f\n",num1,num2);
	
	return 0;
}

void large_of(double *pa, double *pb)
{
	if(*pa < *pb)
		*pa = *pb;
	else
		*pb = *pa;
}