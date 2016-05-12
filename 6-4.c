#include<stdio.h>

int main()
{
	char ch;
	int row;
	
	printf("enter a char:");
	scanf("%c",&ch);
	
	int MaxRow = ch-'A'+1;
//	printf("this char's MaxRow is %d\n",MaxRow);
	
	printf("enter a int num as row:");
	
	while(!scanf("%d",&row))
	{
		if(row <= MaxRow)
			continue;
		else
			printf("enter the right row(row<=%d):",MaxRow);
	}
	
	//每行总的的字符个数
	int nMaxSize = 2 * row - 1;
	for(int i=0; i<row; i++)
	{
		//每行的非空格字符个数
		int nNoBlankSize = 2 * (i + 1) - 1;
		//每行的空格个数
		int nBlankSize = nMaxSize - nNoBlankSize;
		
		//处理空格
		
		//前半部分的空格数（等于后半部分的空格数）
		int nPreBlankSize = nBlankSize / 2;
		for(int j=0; j<nPreBlankSize; j++) 
		{
			printf("*");
		}
		
		char _ch; //每一行的第一个字符 
		_ch = ch - row + 1;
		
		//升序打印字母
		
		//前半部分的非空格字符个数
		int nPreNoBlankSize = nNoBlankSize / 2 + 1;
		for(int j = 0; j < nPreNoBlankSize; j++) //j代表每行输出几个字母
		{
			printf("%c",_ch);
			_ch++;
		}
		
		--_ch;
		
		//降序打印字母
		
		//后半部分的空格数
		int nLastNoBlankSize = nNoBlankSize / 2;
		for(int j=0; j<nLastNoBlankSize; j++)
		{
			--_ch;
			printf("%c",_ch);
		}
		
		//
		for(int j=0; j<nPreBlankSize; j++) 
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}