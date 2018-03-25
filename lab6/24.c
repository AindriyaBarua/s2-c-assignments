

#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{   
	char c[50];
	printf("Enter string ");
	scanf("%s",c);
	int l=strlen(c);
	char d[l];
	for(int i=l-1;i>=0;i++)
	d[i]=c[i];
	
	if(strcmp(d,c)==0)
	printf("It is a palindrome");
	else
	printf("It is not a palindrome");
	return 0;
}

