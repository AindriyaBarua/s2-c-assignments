
#include <stdio.h>

int main(int argc, char **argv)
{
	int a=10;
	int * b;
	b=&a;
	printf("\n a=%d \t b=%d\t *b=%d\n",a,&a,*b);
	return 0;
}

