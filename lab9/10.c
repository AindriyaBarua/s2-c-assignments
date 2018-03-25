


#include <stdio.h>

int main(int argc, char **argv)
{
	char s1[5]="AAA",s2[5],*s;
	s=&s2[8];
	*s='V';
	printf("%s",s1);
	return 0;
}

