#include <stdio.h>

long strlen(char *pt);

int main(void)
{
	char arr[]="hello,ma yueming";
	long len=strlen(arr);
	printf("len=%ld\n",len);
	return 0;
}

long strlen(char *pt)
{
	long length=0;
	
	while(*pt)
	{
		length++;
		pt++;
	}
	
	return length;
}