#include<stdio.h>

void showmenu();
int getchoice(int min, int max);

//9-9.c
int main()
{
	int num;
	showmenu();
	while((num=getchoice(1,4)) != 4)
		printf("i would like to choice %d.\n",num);
	printf("Bye!\n");
	return 0;
}

//9-9.a
void showmenu()
{
	printf("please choose one of the following:\n");
	printf("1)copy files	2)move files\n");
	printf("3)remove files	4)quit\n");
	printf("enter the number of your choice:");
}
//9-9.b
int getchoice(int min, int max)
{
	int num;
	while(scanf("%d",&num))
	{
		if(num<min || num>max)
		{
			printf("%d is not a valid choice:try again\n",num);
			showmenu();
			continue;
		}
		break;
	}
	while(getchar() != '\n')
		continue;
	return num;
}

/*

//9-6
void alter(int *pa, int *pb)
{
	int temp;
	
	temp = *pa;
	
	*pa = *pa+*pb;
	
	*pb = temp-*pb;
}

//9-8
int max(int x, int y, int z)
{
	int biggest;
	
//	if(x>y)
//		biggest=x;
//	else
//		biggest=y;
//	if(biggest<z)
//		biggest=z;

	biggest = x;
	
	if(y > biggest)
		biggest = y;
	if(z > biggest)
		biggest = z;
	
	return biggest;
}
*/