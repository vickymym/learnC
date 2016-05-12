#include<stdio.h>

int main()
{
	int zip[4][2]={{2,4},{6,8},{1,3},{5,7}};
	
	printf("zip=%p, zip+1=%p\n",zip,zip+1);
	printf("zip[0]=%p, zip[0]+1=%p\n",zip[0],zip[0]+1);
	printf("*zip=%p, *zip+1=%p\n",*zip,*zip+1);
	printf("zip[0][0]=%d\n",zip[0][0]);
	printf("*zip[0]=%d\n",*zip[0]);
	printf("**zip=%d\n",**zip);
	printf("zip[2][1]=%d\n",zip[2][1]);
	printf("*(*(zip+2)+1)=%d\n",*(*(zip+2)+1)
	);
	return 0;
}