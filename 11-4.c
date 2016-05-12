#include <stdio.h>

char * find(char arr[], char ch);

int main()
{
	char arr[40];
	char ch;
	char* pt=NULL;
	
	
	while(1)
	{
		printf("enter a string:\n");
		gets(arr);//gets是会读取'\n'，并丢掉它
		printf("enter a char you want to find:\n");
		ch=getchar();
		while(getchar() != '\n')
			continue;
		pt=find(arr,ch);
		
		if(pt)
		{
			puts("Find it!");
			puts(pt);
		}
		else
			printf("have no this char!\n");
		
	}//为什么第二次输入的时候arr=空？
	//解释：之前未加while(getchar() != '\n')这一判断时，会把'\n'当做它下一次读取的字符串
	return 0;
}

char * find(char arr[], char ch)
{
	int i=0;
	
	while(*(arr+i))
	{
		if(*(arr+i) != ch)
			i++;
		else
			return (arr+i);
	}
	
	return NULL;
}//不要返回临时的变量