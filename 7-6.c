/*
#include<stdio.h>
#define SIZE 255

int main()
{
	char ch;
	char arr[SIZE];
	int i=0;
	int count=0;
	
	while((ch = getchar()) != '#')
	{
		arr[i]=ch;
		i++;
	}
	
	for(int j=0; j<i; j++)
	{
		if(arr[j] == 'e' && arr[j+1] == 'i')
			count++;
	}
	
	printf("ei has appeared %d times.\n",count);
	
	return 0;
}

*/

#include<stdio.h>   
int main(void) 
{   
	char former=0,present;  
	int count=0;   
	while((present=getchar()) != '#')  
	{    
		if((former == 'e') && (present == 'i')) 
			count++;   
		former = present;  
	}
	printf("ei has appeared %d times\n",count);
	return(0);
}  