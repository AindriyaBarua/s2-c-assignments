

#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	char c1[50],c2[50];
	printf("Enter 2 strings ");
	scanf("%s",c1);
	scanf("%s",c2);
	printf("%d",strcmp(c1,c2));
	return 0;
}

