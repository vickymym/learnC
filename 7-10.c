#include<stdio.h>
#define RATE1 0.15
#define RATE2 0.28
#define SINGLE 17850
#define HOST 23900
#define MARRIED_SHARE 29750
#define MARRIED_DIVORCE 14875

int main()
{
	char ch;
	float type;
	float pay;
	float tax;
	
	printf("*********************************************\n");
	printf("Select the type of marriage:\n");
    printf("1)SINGLE\n2)HOST\n3)MARRIED_SHARE\n4)MARRIED_DIVORCE\n5)quit\n"); 
	printf("*********************************************\n");
	
	while(1)
	{
		while((ch=getchar()) == '\n')
			continue;
		switch(ch)
		{
			case '1':
					type = SINGLE;
					break;
			case '2':
					type = HOST;
					break;
			case '3':
					type = MARRIED_SHARE;
					break;
			case '4':
					type = MARRIED_DIVORCE;
					break;
			default:
					return 0;
			
		}
		
		printf("you have select %c\n",ch);
		printf("please input pay:");
		scanf("%f",&pay);
		
		if(pay < type)
			tax = pay * RATE1;
		else
			tax = type * RATE1 + (pay - type) * RATE2;
		
		printf("tax=%.2f\n",tax);
	}
	
	return 0;
}