#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 1024

void append(FILE *source, FILE *dest);
int main(int argc, char *argv[])
{
	FILE *desfp, *srcfp;
	int i=2;
	int files=0;
	
	if((desfp=fopen(argv[1],"a")) == NULL)
	{
		fprintf(stderr,"Can't open %s\n",argv[1]);
		exit(2);
	}
	
	if(setvbuf(desfp, NULL, _IOFBF, BUFSIZE) != 0)
	{
		fputs("Can't create output buffer\n",stderr);
		exit(3);
	}
	
	while((argc-2) != 0)
	{
		if(strcmp(argv[1],argv[i]) == 0)
			fputs("Can't append file to itself\n",stderr);
		else if((srcfp=fopen(argv[i],"r")) == NULL)
			fprintf(stderr,"Can't open %s\n",argv[i]);
		else
		{
			if(setvbuf(srcfp, NULL, _IOFBF, BUFSIZE) != 0)
			{
				fputs("Can't create input buffer\n",stderr);
				break;
			}
			append(srcfp,desfp);
			if(ferror(srcfp) != 0)
				fprintf(stderr,"Error in reading file %s.\n",argv[i]);
			if(ferror(desfp) != 0)
				fprintf(stderr,"Error in writing file %s.\n",argv[1]);
			fclose(srcfp);
			files++;
			printf("File %s appended.\n",argv[i]);
		}
		i++;
		argc--;
	}
	
	printf("Done. %d files appended.\n",files);
	fclose(desfp);
	
	return 0;
}

void append(FILE *source, FILE *dest)
{
	size_t bytes;
	static char temp[BUFSIZE];
	
	while((bytes = fread(temp,sizeof(char),BUFSIZE,source)) > 0)
		fwrite(temp,sizeof(char),bytes,dest);
}