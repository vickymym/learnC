#include<stdio.h>
#include<string.h>
#define SIZE 255

void delete_space(char string[][SIZE], int n);

int main()
{
	char string[100][SIZE]={0};
	char ch;
	int i=0;
	int j=0;
	
	//把读进来的字符串一行一行放在二维数组里面
	while((ch=getchar()) != EOF)
	{
		if(ch != '\n')
		{
			string[i][j]=ch;
			j++;
		}
		else
		{
			if(j == 0)//空行
				break;
			else
			{
				string[i][j]='\0';
				i++;
				j=0;
			}
		}
	}
	
	delete_space(string,i);
	
	for(int k=0; k<i; k++)
		printf("The result is: %s\n",string[k]);
	
	return 0;
}

//一次性处理n行字符串（每一串都存放在二维数组的每一行），找到空格，用后面的字符覆盖它，持续这样下去，直到数组结尾
void delete_space(char string[][SIZE], int n)
{
	int j=0;
	int flag=0;
	
	for(int i=0; i<n; i++)
	{	
		while(*(string[i]+j) != '\0')
		{
			if(*(string[i]+j) != ' ')
			{
				j++;
				flag++;
				if(flag != j)
					string[i][flag]=string[i][j];
			}
			else
			{
				j++;
				string[i][flag]=string[i][j];
			}
		}
		j=0;
		flag=0;
	}
}