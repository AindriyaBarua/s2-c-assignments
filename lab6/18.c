

#include <stdio.h>

int main(int argc, char **argv)
{
	char str="Hello";
	printf("\n%s",str);
	printf("\n%s",&str);
	printf("\n%s",&str[2]);
	return 0;
}

