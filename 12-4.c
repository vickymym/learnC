#include <stdio.h>

int func();

int main()
{
	int num;
	
	for(int i=0; i<5; i++)
		num = func();
	
	printf("num=%d\n",num);
	
	return 0;
}

int func()
{
	int static n_invoke = 0;
	
	n_invoke++;
	
	return n_invoke;
}