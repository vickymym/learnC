#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	int i=2;
	int ch;
	int count=0;
	
	if(argc < 2)
	{
		printf("The program need at least 2 arguments.\n");
		exit(1);
	}
	
	if(argc == 2)
	{
		while((ch=getchar()) != EOF)
		{
			if(ch == argv[1][0])
				count++;
		}
		printf("%c appear %d count.\n",argv[1][0],count);
	}
	else
	{
		while((argc-2) != 0)
		{
			if((fp = fopen(argv[i],"r")) == NULL)
			{
				fprintf(stderr,"Can't open file %s.\n",argv[i]);
				exit(2);
			}
			
			while((ch=getc(fp)) != EOF)
			{
				if(ch == argv[1][0])
					count++;
			}
			printf("%c characters appear %d count in file %s.\n",argv[1][0],count,argv[i]);
			if(fclose(fp) != 0)
			{
				fprintf(stderr,"Closing file %s error",argv[i]);
				exit(3);
			}
			count=0;
			i++;
			argc--;
		}
	}
		
	return 0;
}