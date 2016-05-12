#include<stdio.h>
#define COUNT 26

int main()
{
	char zm[COUNT];
	char ch='a';
	
	for(int i=0; i<COUNT; i++)
	{
		zm[i]=ch;
		printf("zm[%d]=%c\n",i,ch);
		ch++;
	}
	return 0;
}