
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	FILE *f1;
	FILE *f2;
	f1=fopen("file1.dat","r");
	if(f1==NULL)
	{
		printf("file could not be opened\n");
		exit(0);
	}
	f2=fopen("file2.dat","w");
	if(f2==NULL)
	{
		printf("file could not be opened\n");
		exit(0);
	}
	char c;
	while((c=fgetc(f1))!=EOF)
	{
		fputc(c,f2);
	}
	if(fclose(f1)==0)
	printf("File closed successfully\n");
	else
	printf("File not closed\n")
	fclose(f2);
	
	return 0;
}

