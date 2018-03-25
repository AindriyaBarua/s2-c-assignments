

#include <stdio.h>
#include <string.h>
void stricat(char *dest,char *src)
{
	for(int i=0,l=strlen(dest);i<strlen(src);i++,l++)
	{
		dest[l]=src[i];
	}
}
int main(int argc, char **argv)
{
	char dest[100],src[50];
	printf("Enter a string:");
	scanf("%s",src);
	printf("Enter the second string string:");
	scanf("%s",dest);
	stricat(dest,src);
	printf("The final string is:%s",dest);
	return 0;
}

