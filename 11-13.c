#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	double num=atof(argv[1]);
	int times=atoi(argv[2]);
	double result=1.0;
	
	if(argc < 3)
		printf("Usage:enter least 3 strings\n");
	else
	{
		if(num>=-0.000001 && num<0.000001)
		//if(num == 0.0)//double类型或者float类型，不能直接比较
			result = 0.0;
		if(times > 0)
		{
			for(int i=0; i<times; i++)
				result *= num;
		}
		else if(times < 0)
		{
			for(int i=0; i<-times; i++)
				result /= num;
		}
		else
			result = 1.0;
		
		printf("%.0f de %d ci mi is:%f\n",num,times,result);
	}
	
	return 0;
}