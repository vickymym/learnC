#include <stdio.h>
#include <string.h>
#define SIZE 255

char * delete_space(char source[]);

int main()
{
/*	char source[SIZE]={0};
	char ch_per;
	char ch_after;
	int i=0;
	char* target=source;

	printf("please enter a string:\n");
		
	while((ch_per=getchar()) != EOF)
	{
		if(ch_per=='\n')
		{
			source[i]=ch_per;
			i++;
			if((ch_after=getchar())=='\n')
			{
				break;
			}
			else
			{
				source[i]=ch_after;
				i++;
			}
		}
		else
		{
			source[i]=ch_per;
			i++;
		}
	}
*/
	char source[100][SIZE]={0};
	int i=0;
	int j=0;
	char ch;
	
	printf("please enter the strings:\n");
	
	while(ch=getchar())
	{
		if(ch != '\n')
		{
			source[i][j]=ch;
			j++;
		}
		else
		{
			if(j !=0)
			{
				source[i][j]='\0';
				i++;
				j = 0;
			}
			else
				break;
		}
	}
	
	for(int k=0; k<i; ++k)
	{
		delete_space(source[k]);
		puts(source[k]);
	}
	
	return 0;
}

char * delete_space(char source[])
{
	//char* pflag=NULL;
	int i=0;
	int flag=0;
	
	while(*(source+i) != '\0')
	{
		if(*(source + i) != ' ')
		{
			*(source + flag) = *(source + i);
				
			i++;
			flag++;
			
		}
		else
		{
			i++;
		}
		/*
		if(!pflag && *(source+i) == ' ')
		{
			flag = i;
			pflag = source+flag;
			i++;
			while(*(source+i) == ' ')
				i++;
			*pflag = *(source+i);
			i++;
		}
		*/
		/*
		if(pflag && *(source+i) == ' ')
		{
			flag++;
			pflag = source+flag;
			while(*(source+i) == ' ')
				i++;
			*pflag = *(source+i);
			i++;
		}
		*/
		/*
		if(pflag && *(source+i) != ' ')
		{
			flag++;
			pflag = source+flag;
			*pflag = *(source+i);
			i++;
		}
		*/
		/*
		if(!pflag && *(source+i) != ' ')
			i++;
		*/
	}
	*(source+flag)='\0';
	
	return source;
}