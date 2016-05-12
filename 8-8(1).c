#include <stdio.h>
#include <ctype.h>

float get_float();
char get_first();

int main()
{
	float num1,num2;
	char select;
		
	while(1)
	{
		printf("Enter the operation of your selectoice:\n");
		printf("a.add		s.subtract\n");
		printf("m.multiply		d.divide\n");
		printf("q.quit\n");
		
		select=get_first();
		
		if(select!='a' && select!='s' && select!='m' && select!='d')
		{
			printf("Bye!\n");
			break;
		}
		
		printf("Enter first number:");
		num1=get_float();
		printf("Enter second number:");
		num2=get_float();
		
		while(select=='d' && num2==0)
		{
			printf("enter a number other than 0:\n");
			num2=get_float();
		}
		
		switch(select)
		{
			case 'a':
					printf("%.1f + %.1f = %.1f\n",num1,num2,num1+num2);
					break;
			case 's':
					printf("%.1f * %.1f = %.1f\n",num1,num2,num1*num2);
					break;
			case 'm':
					printf("%.1f - %.1f = %.1f\n",num1,num2,num1-num2);
					break;
			case 'd':
					printf("%.1f / %.1f = %.1f\n",num1,num2,num1/num2);
					break;
			default:
					break;
		}
		
	}
	
	return 0;
}

float get_float()
{
	float input;
	char arr[40];
	
	while(scanf("%f",&input) != 1)
	{
		//while((select=getselectar()) != '\n')
		//	putselectar(select);
		gets(arr);
		printf("%s is not a number.\n",arr);
		printf("Please enter a float value,suselect as 2.5,-1.2E3,or 1:");
	}
	
	while(getchar() != '\n')
		;
	
	return input;
}

/*char get_first()
{
	char ch;
	
	while(isspace(ch=getchar()))
		;
	while(getchar() != '\n')
		;
	return ch;
}*/

char get_first()
{
	char ch;
	
	while(isspace(ch=getchar()))
		continue;
	
	return ch;
}