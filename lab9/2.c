

#include <stdio.h>

int main(int argc, char **argv)
{
	int x;
	int * ip;
	ip=&x;
	scanf("%d",ip);
	printf("x=%d\n",x);
	*ip=11;
	printf("x=%d\n",x);
	x=5;
	printf("*ip=%d\n",*ip);
	return 0;
}

