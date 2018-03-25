

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
	f2=fopen("file2.dat","w+");
	if(f2==NULL)
	{
		printf("file could not be opened\n");
		exit(0);
	}
	char c;
	while((c=fgetc(f1))!=EOF)
	{
		c=c+4;
		fputc(c,f2);
	}
rewind(f2);
	printf("The encrypted file is:");
	
	while((c=fgetc(f2))!=EOF)
	{
		printf("%c",c);
	}
	fclose(f1);
	fclose(f2);
	
}

