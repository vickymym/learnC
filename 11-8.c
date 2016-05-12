#include <stdio.h>
#include <string.h>
#define SIZE 80

//void reverse(char source[]);
char * reverse(char source[]);

int main()
{
	
	char str[SIZE]={0};
	char* ptr=NULL;
	
	while(1)
	{
		printf("please enter a string:\n");
		gets(str);
		ptr=reverse(str);
		puts(ptr);
	}
	
	return 0;
}

/*void reverse(char source[])
{
	char* ptr=source+strlen(source);
	
	for(int i=0; i<strlen(source); i++)
		putchar(*--ptr);
	putchar('\n');
}*/

char * reverse(char source[])
{
	char target[SIZE]={0};
	int len=strlen(source);
	int i=0;
	
	for(i=0; i<len; i++)
		target[i]=source[len-i-1];
	target[i]='\0';
	
	for(i=0; i<len; i++)
		source[i]=target[i];
	target[i]='\0';
	
	return source;
}//这里不能直接返回target，调用结束后，target就销毁了，会有问题，那为什么返回临时的指针变量就可以？答案：返回临时的指针变量也会有问题，也不可以。