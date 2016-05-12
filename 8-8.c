#include<stdio.h>

int main()
{
	float num1,num2;
	char ch;
		
	while(1)
	{
		printf("Enter the operation of your choice:\n");
		printf("a.add		s.subtract\n");
		printf("m.multiply		d.divide\n");
		printf("q.quit\n");
		
		ch = getchar();
		
		while(getchar()!='\n')
			continue;
		
		if(ch == 'q')
			break;
		
		printf("Enter first number:");
		while(!scanf("%f",&num1))
		{
			printf("it is not a number:\n",num1);	
			printf("please enter a number,such as 2.5,-1.78E8,or3:");
			
			while(getchar()!='\n')
				continue;
		}

		printf("Enter second number:");
		while(!scanf("%f",&num2))
		{
			printf("it is not a number:",num2);
			printf("please enter a number,such as 2.5,-1.78E8,or3:");
			
			while(getchar()!='\n')
				continue;
		}
			
		if(ch == 'a')
			printf("%.1f + %.1f = %.1f\n",num1,num2,num1+num2);
		else if(ch == 's')
			printf("%.1f * %.1f = %.1f\n",num1,num2,num1*num2);
		else if(ch == 'm')
			printf("%.1f - %.1f = %.1f\n",num1,num2,num1-num2);
		else if(ch == 'd')
		{
			while(num2 == 0)
			{
				printf("enter a number other than 0:\n");
				scanf("%f",&num2);
			
				while(getchar()!='\n')
					continue;
			}
			printf("%.1f / %.1f = %.1f\n",num1,num2,num1/num2);
		}
		else
			break;	
	}
	
	printf("Bye!\n");
	
	return 0;
}