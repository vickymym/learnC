#include<stdio.h>

int main()
{
	//F
	//FE
	//FED
	//FEDC
	//FEDCB
	//FEDCBA
/*	char ch='F';
	
	for(int i=0; i<6; i++)
	{
		for(int j=0; j<=i; j++)
		{
			printf("%c",ch-j);
		}
		printf("\n");
	}
*/
	
	//输入字母E产生如下输出
	//    A
	//   ABA
	//  ABCBA
	// ABCDCBA
	//ABCDEDCBA
	
	char ch;
	
	printf("enter a char:");
	scanf("%c",&ch);
	
	int row=ch-'A'+1;
	
	for(int i=0; i<row; i++)
	{
		//打印空格，每行打印的空格数
		//第一行：4个；第二行：3个；第三行：2个；第四行：1个；第五行：0个
		
		for(int j=0; j<row-1-i; j++)
			printf("*");
		
		//升序打印字母，打印金字塔左半部分的字母
		
		char first_print_ch='A';
		for(int j=0; j<=i; j++)
		{
			printf("%c",first_print_ch);
			first_print_ch++;
		}
		
		//降序打印字母，打印金字塔右半部分
		
		--first_print_ch;
		//printf("now first_print_ch=*%c*",first_print_ch);
		for(int j=0; j<(2*(i+1)-i)/2; j++)
		{	
			--first_print_ch;
			printf("%c",first_print_ch);
		}
	
		printf("\n");
	}
	
	return 0;
}

