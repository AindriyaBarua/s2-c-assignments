

#include <stdio.h>
void strcopy(char *dest,const char *src)
{ 
	while(*src!='\0')
	{
		*dest=*src;
		dest++;
		src++;
	}
}
int main(int argc, char **argv)
{
	char dest[100],src[100];
	printf("Enter a string:");
	scanf("%s",src);
	strcopy(dest,src);
	printf("The copied string is:%s",dest);
	return 0;
}

