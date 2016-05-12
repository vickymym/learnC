#include<stdio.h>
#define LIMIT1 2
#define LIMIT2 10

void to_base_n(int n, int range);

int main()
{
	int number;
	int binary;
	
	printf("Enter two integer (q to quit):\n");
	while(scanf("%d%d",&number,&binary) == 2)
	{
		printf("num=%d,binary=%d\n",number,binary);
		while(binary<LIMIT1 || binary>LIMIT2)
		{
			printf("%d is beyond the range,enter a num between %d to %d:",binary,LIMIT1,LIMIT2);
			scanf("%d",&binary);
		}
		printf("Binary equivalent:");
		to_base_n(number,binary);
		putchar('\n');
		printf("Enter two integer (q to quit):\n");
	}
	
	printf("Bye!\n");
	
	return 0;
}

void to_base_n(int n, int range)
{
	int r;
	
	r = n % range;
	if(n >= range)
		to_base_n(n/range,range);
	printf("%d",r);
	//putchar('0'+r);
}

