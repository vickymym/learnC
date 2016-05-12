#include<stdio.h>
#include<math.h>
#define PAGES 931

int main()
{
	//printf("Gramps sez,\"a \\ is a backslash.\"\n");
	
/*	int Size_Of_Int=sizeof(int);
	int Max_Int_Num=pow(2,Size_Of_Int*8)-1;
	int Min_Int_Num=-Max_Int_Num;
	
	int overlow_right=Max_Int_Num+1;
	int overlow_left=Min_Int_Num-1;
	
	printf("sizeof(int)=%d\nMax_Int_Num=%d\nMin_Int_Num=%d\n",Size_Of_Int,Max_Int_Num,Min_Int_Num);
	printf("overlow_right=%d\noverlow_left=%d\n",overlow_right,overlow_left);
*/
/*
	printf("*%d*\n",PAGES);
	printf("*%2d*\n",PAGES);
	printf("*%010d*\n",PAGES);
	printf("*%-010d*\n",PAGES);
	
	const double RENT = 3852.99;
	
	printf("*%f*\n",RENT);
	printf("*%e*\n",RENT);
	printf("*%3.1f*\n",RENT);
*/
		
	char arr[20];
	int num;
	printf("check scanf break first blanck(except %c):\n");
//	scanf("%s",arr);
	scanf("%d",&num);
	
//	printf("tne string is:%s\n",arr);
	printf("the number is:%d\n",num);
	return 0;
}