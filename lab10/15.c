
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void nullify(char *a)
{
	for(int i=0;a[i]!='\0';i++)
	a[i]=NULL;
}
int main(int argc, char **argv)
{
	FILE *file1;
	file1=fopen("Abbreviate.txt","w+");
	if(file1==NULL)
	{
		printf("File could not be opened");
		exit(0);
	}
	char s[200];
	printf("Enter name:");
	scanf(" %[^\n]",s);
	int cn=1,k=0;char word[50];
	for(int i=0;s[i]!='\0';i++)
	{ if(s[i]==' ')
		cn++;
	}
	for(int i=0;i<=strlen(s)+1;i++)
	{
		if(cn>2)
		{
			
			if(s[i]!=' ')
			{
				word[k]=s[i];
				k++;
			}
			else
			{	cn--;
				k=0;
				
				fprintf(file1,"%c ",word[0]);
				nullify(word);
			}
		}
		else
		{
			if(s[i]!=' '&&s[i]!='\0')
			{
				word[k]=s[i];
				k++;
			}
			else
			{   
				k=0;
				fprintf(file1,"%s ",word);
				nullify(word);
			}
		}
	}
char c;
rewind(file1);
while((c=fgetc(file1))!=EOF)
printf("%c",c);
fclose(file1);
return 0;
}

