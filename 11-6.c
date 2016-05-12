#include <stdio.h>
#include <string.h>
#define SIZE 255

char * my_strncpy(char s1[], char s2[], int n);

int main()
{
	char s1[SIZE]={0};
	char s2[40]={0};
	int n=0;
	
	while(1)
	{
		printf("please enter the s1 string:\n");
		gets(s1);
		printf("please enter the s2 string:\n");
		gets(s2);
		printf("please enter the number to copy:\n");
		scanf("%d",&n);
		while(getchar() != '\n')
			continue;
		
		my_strncpy(s1,s2,n);
		
		printf("the result is:%s\n",s1);
	}
	
	return 0;
}

char * my_strncpy(char s1[], char s2[], int n)
{
	int len_s2=strlen(s2);
	int i=0;
	
	if(len_s2 < n)
	{
		for(i=0; i<n; i++)
			s1[i]=s2[i];
	}
	else
	{
		for(i=0; i<n; i++)
			s1[i]=s2[i];
		s1[i]='\0';
	}
	
	return s1;
}